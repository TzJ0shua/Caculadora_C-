//test_num.cpp
#include "test_num.h"

int test_num_tipo(int ni){
	int resp;
	if((ni%2)==0){
		resp = 0;
	}
	else{
		resp = 1;
	}
	return resp;
}

int test_num_primo(int ni){
	int aux = 0, div = 0;
	for(aux = 1; aux <= ni; aux++){
		if((ni%aux)==0){
		div++;
		}
	}
	return div;
}

