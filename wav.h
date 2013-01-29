/**
 *	
 *  WAV FILE STRUCTURE
 *
 *  @Author:REmaxer	
 */

//define byte type
typedef unsigned char byte;

struct riff_header_chunk{
	// 
	unsigned int chunk_id;
	//
	unsigned int chunk_size;	//BigE
	//
	unsigned int format;
};	

struct fmt_chunk{
	//
	unsigned int schunk1_id;
	//
	unsigned int schunk1_size;	//BigE
	//
	unsigned short audio_format;	//BigE
	//	
	unsigned short num_channels;	//BigE
	//
	unsigned int sample_rate;
	//
	unsigned int byte_rate;
	//
	unsigned short block_align;
	//
	unsigned short  bits_per_sample;
};

struct data_chunk{
	//
	unsigned int schunk2_id;
	//
	unsigned int schunk2_size;
	//data pointer
	byte *data;
};
	


