//Sprite info will go here

typedef struct pixel {
	int arr[3];
} pixel;

pixel Rarr[16][16];
pixel Carr[16][16];
pixel Tarr[16][16];
pixel Farr[16][16];
pixel Warr[16][16];
pixel Marr[16][16];

pixel lb = {{145, 113, 55}};
pixel lg = {{155, 231, 71}};
pixel pe = {{25, 204, 153}};
pixel pi = {{255, 153, 153}};
pixel br = {{88, 59, 0}};
pixel wh = {{255, 255, 255}};

Rarr = {
lg,lg,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lg,lg
lg,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lg
lb,lb,pe,lb,lb,lb,lb,lb,lb,lb,lb,lb,pe,pe,lb,lg
lb,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,lb,lb
lb,lb,pe,pe,lb,lb,pe,pe,pe,pe,lb,pe,pe,pe,lb,lb
lb,lb,lb,lb,pe,pe,lb,pe,pe,lb,pe,lb,lb,pe,lb,lb
lb,lb,pe,pe,wh,pe,pe,br,pe,pe,wh,pe,pe,lb,lb,lb
pe,lb,pe,wh,br,wh,pe,br,pe,wh,br,wh,wh,pe,lb,pe
pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe
pe,pe,pe,pe,pe,pe,br,pe,pe,br,pe,pe,pe,pe,pe,pe
pe,pe,pe,pe,pe,pe,pe,br,br,pe,pe,pe,pe,pe,pe,pe
lg,lg,pe,pe,pi,pe,pe,pe,pe,pe,pe,pi,pe,pe,lg,lg
lg,lg,pe,pe,pe,wh,wh,wh,wh,wh,wh,pe,pe,pe,lg,lg
lg,lg,lg,pe,pe,pe,pi,pi,pi,pi,pe,pe,pe,lg,lg,lg
lg,lg,lg,lg,pe,pe,pe,pe,pe,pe,pe,pe,lg,lg,lg,lg
lg,lg,lg,lg,lg,pe,pe,pe,pe,pe,pe,lg,lg,lg,lg,lg
};