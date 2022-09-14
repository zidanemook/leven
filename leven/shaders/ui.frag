layout(binding=0) uniform sampler2D Texture;

smooth in vec2 vs_texCoord;
out vec4 TexColor;

void main()
{
	TexColor = texture2D(Texture, vs_texCoord);
}
