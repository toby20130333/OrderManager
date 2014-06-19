package org.kde.necessitas.origo;

import android.media.AudioManager;
import android.media.MediaPlayer;
import android.util.Log;

public class QSimpleAudioPlayer {
    MediaPlayer m_mediaPlayer;

    public QSimpleAudioPlayer() {
        m_mediaPlayer = new MediaPlayer();
    }

    boolean setUrl(String path)
    {
        m_mediaPlayer.reset();
        try {
            m_mediaPlayer.setAudioStreamType(AudioManager.STREAM_MUSIC);
            m_mediaPlayer.setDataSource(path);
            m_mediaPlayer.prepare();
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
        Log.i("Qt", "addTwoNumbers returned "+addTwoNumbers(1,2));
        return true;
    }

    boolean play()
    {
        try {
            m_mediaPlayer.start();
        }
        catch (Exception e) {
            e.printStackTrace();
            return false;
        }
        return true;
    }

    boolean pause()
    {
        try {
            m_mediaPlayer.pause();
        }
        catch (Exception e) {
            e.printStackTrace();
            return false;
        }
        return true;
    }

    boolean stop()
    {
        try {
            m_mediaPlayer.stop();
        }
        catch (Exception e) {
            e.printStackTrace();
            return false;
        }
        return true;
    }

    boolean release()
    {
        try {
            m_mediaPlayer.release();
        }
        catch (Exception e) {
            e.printStackTrace();
            return false;
        }
        return true;
    }

    public static native int addTwoNumbers(int a, int b);
}
