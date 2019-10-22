
float timeFromStart(){
	clock_t time = clock();

	return (double)time / CLOCKS_PER_SEC;

}