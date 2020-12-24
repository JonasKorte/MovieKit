#include "core.h"

namespace MK
{
    MKWindow::MKWindow()
    {
        this->m_title = "";
        this->m_xPosition = 0;
        this->m_yPosition = 0;
        this->m_width = 640;
        this->m_height = 480;
        this->m_isVisible = true;

        MKWindowMessage message;

        message.message = "uninitialized";
        message.channel = MKWindowMessageChannel::MKWMC_WARNING;

        this->m_message = message;
    }

    MKWindow::MKWindow(const char *title, int xPosition, int yPosition, int width, int height)
    {
        this->m_title = title;
        this->m_xPosition = xPosition;
        this->m_yPosition = yPosition;
        this->m_width = width;
        this->m_height = height;
        this->m_isVisible = true;

        MKWindowMessage message;

        message.message = "ready";
        message.channel = MKWindowMessageChannel::MKWMC_LOG;

        this->m_message = message;
    }

    const char *MKWindow::getTitle()
    {
        return this->m_title;
    }

    void MKWindow::setTitle(const char *newValue)
    {
        this->m_title = newValue;
    }

    int MKWindow::getXPosition()
    {
        return this->m_xPosition;
    }

    void MKWindow::setXPosition(int newValue)
    {
        this->m_xPosition = newValue;
    }

    int MKWindow::getYPosition()
    {
        return this->m_yPosition;
    }

    void MKWindow::setYPosition(int newValue)
    {
        this->m_yPosition = newValue;
    }

    int MKWindow::getWidth()
    {
        return this->m_width;
    }

    void MKWindow::setWidth(int newValue)
    {
        this->m_width = newValue;
    }

    int MKWindow::getHeight()
    {
        return this->m_height;
    }

    void MKWindow::setHeight(int newValue)
    {
        this->m_height = newValue;
    }

    bool MKWindow::getVisibility()
    {
        return this->m_isVisible;
    }

    void MKWindow::setVisibility(bool newValue)
    {
        this->m_isVisible = newValue;
    }

    MKWindowMessage MKWindow::getMessage()
    {
        return this->m_message;
    }

    void MKWindow::setMessage(MKWindowMessage newValue)
    {
        this->m_message = newValue;
    }

    MKWindow *createWindow(const char *title, int xPosition, int yPosition, int width, int height)
    {
        return new MKWindow(title, xPosition, yPosition, width, height);
    }

    MKWindowState updateWindow(MKWindow *window)
    {
        MKWindowState state;

        state.title = window->getTitle();
        state.xPosition = window->getXPosition();
        state.yPosition = window->getYPosition();
        state.width = window->getWidth();
        state.height = window->getHeight();
        state.message = window->getMessage();

        return state;
    }

} // namespace MK