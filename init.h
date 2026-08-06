#ifndef INIT_H
#define INIT_H

class favColors {
private:
	unsigned int buffer = 0;
public:
	unsigned int getBuffer() const;
	void setBuffer(int newBuffer);

	void pressEnterToContinue();
	void clearConsole();
	void showFirstMenu();
	void showColors();
	void addColor(int colorOption);
	void removeColor(int colorOption);
	void showFavoriteColors();
};

#endif