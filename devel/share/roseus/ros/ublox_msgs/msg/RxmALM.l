;; Auto-generated. Do not edit!


(when (boundp 'ublox_msgs::RxmALM)
  (if (not (find-package "UBLOX_MSGS"))
    (make-package "UBLOX_MSGS"))
  (shadow 'RxmALM (find-package "UBLOX_MSGS")))
(unless (find-package "UBLOX_MSGS::RXMALM")
  (make-package "UBLOX_MSGS::RXMALM"))

(in-package "ROS")
;;//! \htmlinclude RxmALM.msg.html


(intern "*CLASS_ID*" (find-package "UBLOX_MSGS::RXMALM"))
(shadow '*CLASS_ID* (find-package "UBLOX_MSGS::RXMALM"))
(defconstant ublox_msgs::RxmALM::*CLASS_ID* 2)
(intern "*MESSAGE_ID*" (find-package "UBLOX_MSGS::RXMALM"))
(shadow '*MESSAGE_ID* (find-package "UBLOX_MSGS::RXMALM"))
(defconstant ublox_msgs::RxmALM::*MESSAGE_ID* 48)

(defun ublox_msgs::RxmALM-to-symbol (const)
  (cond
        ((= const 2) 'ublox_msgs::RxmALM::*CLASS_ID*)
        ((= const 48) 'ublox_msgs::RxmALM::*MESSAGE_ID*)
        (t nil)))

(defclass ublox_msgs::RxmALM
  :super ros::object
  :slots (_svid _week _dwrd ))

(defmethod ublox_msgs::RxmALM
  (:init
   (&key
    ((:svid __svid) 0)
    ((:week __week) 0)
    ((:dwrd __dwrd) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _svid (round __svid))
   (setq _week (round __week))
   (setq _dwrd __dwrd)
   self)
  (:svid
   (&optional __svid)
   (if __svid (setq _svid __svid)) _svid)
  (:week
   (&optional __week)
   (if __week (setq _week __week)) _week)
  (:dwrd
   (&optional __dwrd)
   (if __dwrd (setq _dwrd __dwrd)) _dwrd)
  (:serialization-length
   ()
   (+
    ;; uint32 _svid
    4
    ;; uint32 _week
    4
    ;; uint32[] _dwrd
    (* 4    (length _dwrd)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _svid
       (write-long _svid s)
     ;; uint32 _week
       (write-long _week s)
     ;; uint32[] _dwrd
     (write-long (length _dwrd) s)
     (dotimes (i (length _dwrd))
       (write-long (elt _dwrd i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _svid
     (setq _svid (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _week
     (setq _week (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32[] _dwrd
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _dwrd (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _dwrd i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get ublox_msgs::RxmALM :md5sum-) "97a9e7864105ab31fc93f2e4bef9de26")
(setf (get ublox_msgs::RxmALM :datatype-) "ublox_msgs/RxmALM")
(setf (get ublox_msgs::RxmALM :definition-)
      "# RXM-ALM (0x02 0x30)
# GPS Aiding Almanach Input/Output Message
#
# This message is provided considered obsolete, please use AID-ALM instead!
# - If the WEEK Value is 0, DWRD0 to DWRD7 are not sent as the almanach is not 
#   available for the given SV.
# - DWORD0 to DWORD7 contain the 8 words following the Hand-Over Word ( HOW )
#   from the GPS navigation message, either pages 1 to 24 of sub-frame 5 or 
#   pages 2 to 10 of subframe 4. See IS-GPS-200 for a full description of the 
#   contents of the Almanac pages.
# - In DWORD0 to DWORD7, the parity bits have been removed, and the 24 bits of 
#   data are located in Bits 0 to 23. Bits 24 to 31 shall be ignored.
# - Example: Parameter e (Eccentricity) from Almanach Subframe 4/5, Word 3, 
#   Bits 69-84 within the subframe can be found in DWRD0, Bits 15-0 whereas 
#   Bit 0 is the LSB.
#

uint8 CLASS_ID = 2
uint8 MESSAGE_ID = 48

uint32 svid             # SV ID for which this Almanach Data is 
                        # (Valid Range: 1 .. 32 or 51, 56, 63).
uint32 week             # Issue Date of Almanach (GPS week number)

# Start of optional block
uint32[] dwrd           # Almanach Words
# End of optional block

")



(provide :ublox_msgs/RxmALM "97a9e7864105ab31fc93f2e4bef9de26")


