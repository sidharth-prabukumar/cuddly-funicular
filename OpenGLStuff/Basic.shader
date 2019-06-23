#shader vertex
#version 410 core


in vec2 position;
in vec3 color;

out vec3 Color;

void main()
{
	Color = color;
	gl_Position = vec4(position, 0.0, 1.0);
}
/*layout(location = 0) in vec4 position;
void main()
{
gl_Position = position;
};*/

#shader fragment
#version 410 core

in vec3 Color;

out vec4 outColor;

void main()
{
	outColor = vec4(Color, 1.0);
}

/*layout(location = 0) out vec4 color;
void main()
{
color = vec4(1.0, 0.75294, 0.7961, 1.0);
};*/