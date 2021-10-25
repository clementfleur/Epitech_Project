/*
** EPITECH PROJECT, 2021
** encaplusation
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

#include <string>
#include <fstream>
#include <sstream>

class Picture {
    public:
        Picture();
        Picture(const std::string &file);
        virtual ~Picture();

        std::string data;
        bool getPictureFromFile(const std::string &title);

    protected:
    private:
};


#endif /* !PICTURE_HPP_ */
