#pragma once

namespace MK
{

    enum class MKWindowManager
    {
        MKWM_DX11,
        MKWM_DX12,
        MKWM_GL,
        MKWM_GLES,
        MKWM_NATIVE_WINDOWS,
        MKWM_NATIVE_MAC,
        MKWM_NATIVE_LINUX
    };

    enum class MKWindowMessageChannel
    {
        MKWMC_LOG = 0,
        MKWMC_DATA = 1,
        MKWMC_WARNING = 2,
        MKWMC_ERROR = 3,
        MKWMC_CRITICAL = 4
    };

    struct MKWindowMessage
    {
        const char *message;
        MKWindowMessageChannel channel;
    };

    class MKWindow
    {
    public:
        MKWindow();
        MKWindow(const char *title, int xPosition, int yPosition, int width, int height);

        bool draw(MKWindowManager windowManager);

        const char *getTitle();
        void setTitle(const char *newValue);

        int getXPosition();
        void setXPosition(int newValue);

        int getYPosition();
        void setYPosition(int newValue);

        int getWidth();
        void setWidth(int newValue);

        int getHeight();
        void setHeight(int newValue);

        bool getVisibility();
        void setVisibility(bool newValue);

        MKWindowMessage getMessage();

    protected:
        const char *m_title;
        int m_xPosition;
        int m_yPosition;
        int m_width;
        int m_height;
        bool m_isVisible;
        MKWindowMessage m_message;

        void setMessage(MKWindowMessage newValue);
    };

    struct MKWindowState
    {
        const char *title;
        int xPosition;
        int yPosition;
        int width;
        int height;
        bool isVisible;
        MKWindowMessage message;
    };

    MKWindow *createWindow(const char *title, int xPosition, int yPosition, int width, int height);
    MKWindowState updateWindow(MKWindow *window);
    bool terminateWindow(MKWindow *window);
} // namespace MK