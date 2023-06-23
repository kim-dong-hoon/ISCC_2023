# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from race/lane_info.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class lane_info(genpy.Message):
  _md5sum = "e5107cf654a976d33dc89cb06bf8be8e"
  _type = "race/lane_info"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 left_slope
float32 right_slope

bool is_left
bool is_right

float32 bias_from_left
float32 bias_from_right
"""
  __slots__ = ['left_slope','right_slope','is_left','is_right','bias_from_left','bias_from_right']
  _slot_types = ['float32','float32','bool','bool','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       left_slope,right_slope,is_left,is_right,bias_from_left,bias_from_right

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(lane_info, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.left_slope is None:
        self.left_slope = 0.
      if self.right_slope is None:
        self.right_slope = 0.
      if self.is_left is None:
        self.is_left = False
      if self.is_right is None:
        self.is_right = False
      if self.bias_from_left is None:
        self.bias_from_left = 0.
      if self.bias_from_right is None:
        self.bias_from_right = 0.
    else:
      self.left_slope = 0.
      self.right_slope = 0.
      self.is_left = False
      self.is_right = False
      self.bias_from_left = 0.
      self.bias_from_right = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2f2B2f().pack(_x.left_slope, _x.right_slope, _x.is_left, _x.is_right, _x.bias_from_left, _x.bias_from_right))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 18
      (_x.left_slope, _x.right_slope, _x.is_left, _x.is_right, _x.bias_from_left, _x.bias_from_right,) = _get_struct_2f2B2f().unpack(str[start:end])
      self.is_left = bool(self.is_left)
      self.is_right = bool(self.is_right)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2f2B2f().pack(_x.left_slope, _x.right_slope, _x.is_left, _x.is_right, _x.bias_from_left, _x.bias_from_right))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 18
      (_x.left_slope, _x.right_slope, _x.is_left, _x.is_right, _x.bias_from_left, _x.bias_from_right,) = _get_struct_2f2B2f().unpack(str[start:end])
      self.is_left = bool(self.is_left)
      self.is_right = bool(self.is_right)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f2B2f = None
def _get_struct_2f2B2f():
    global _struct_2f2B2f
    if _struct_2f2B2f is None:
        _struct_2f2B2f = struct.Struct("<2f2B2f")
    return _struct_2f2B2f
