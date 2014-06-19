package org.qtproject.example.notification;

import android.R.integer;
import android.app.Notification;
import android.app.NotificationManager;
import android.content.Context;

public class NotifictionforQt extends org.qtproject.qt5.android.bindings.QtActivity
{
    private static NotificationManager m_notificationManager;
    private static Notification.Builder m_builder;
    private static NotifictionforQt m_instance;

    public NotifictionforQt()
    {
        m_instance = this;
    }

    public static void notify(String s)
    {
        if (m_notificationManager == null) {
            m_notificationManager = (NotificationManager)m_instance.getSystemService(Context.NOTIFICATION_SERVICE);
            m_builder = new Notification.Builder(m_instance);
            //m_builder.setSmallIcon(R.drawable.icon);
            m_builder.setContentTitle("A message from Qt!");
        }

        m_builder.setContentText(s);
        m_notificationManager.notify(1, m_builder.build());
    }
}

//package org.kde.necessitas.origo;

//import android.R.integer;
//import android.media.AudioManager;
//import android.media.MediaPlayer;
//import android.util.Log;
//import android.app.Notification;
//import android.app.NotificationManager;
//import android.content.Context;
//import android.content.Intent;

//public class NotifictionforQt {
//MediaPlayer m_mediaPlayer;

//    public NotifictionforQt() {
//    //获取到通知管理器
//    NotificationManager mNotificationManager = (NotificationManager)getSystemService(Context.NOTIFICATION_SERVICE);
//    }
//    //设置通知的内容以及通知图标
//    boolean setNotificationTxt(String contents,String iconPath)
//    {
//        int notificationIcon=R.drawable.icon;
//        CharSequence notificationTitle=contents;
//        long when = System.currentTimeMillis();

//         Notification notification=new Notification(notificationIcon, notificationTitle, when);

//         notification.defaults=Notification.DEFAULT_ALL;
//         return true;
//    }
//    //发送通知
//    boolean sendNotice()
//    {
//         if(notification!=null)
//        {
//            Log.e("notifacation", "notifacation is ok");
//           mNotificationManager.notify(1000, notification);
//        }
//        return true;
//    }
//    public static native int addTwoNumbers(int a, int b);
//    }
