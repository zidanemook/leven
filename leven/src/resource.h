#ifndef		HAS_RESOURCE_H_BEEN_INCLUDED
#define		HAS_RESOURCE_H_BEEN_INCLUDED

#include	"sdl_wrapper.h"
#include	"model_obj.h"


GLuint		Resource_LoadTexture(const char* path);
GLuint		Resource_LoadTextureArray(const std::vector<std::string>& textureFiles);

#endif	//	HAS_RESOURCE_H_BEEN_INCLUDED
