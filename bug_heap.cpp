
int main(){
	int* a = new int[8];
	int x = a[8]; // Valid indices 0 to 7 only
	delete[] a;
	return x;
}
