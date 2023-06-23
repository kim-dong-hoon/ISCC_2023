# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vision_distance/Colorcone_lidar.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Colorcone_lidar(genpy.Message):
  _md5sum = "f94403809a4a82603b54e67d56403620"
  _type = "vision_distance/Colorcone_lidar"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 flag
float64 dist_x
float64 dist_y"""
  __slots__ = ['flag','dist_x','dist_y']
  _slot_types = ['int32','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       flag,dist_x,dist_y

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Colorcone_lidar, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.flag is None:
        self.flag = 0
      if self.dist_x is None:
        self.dist_x = 0.
      if self.dist_y is None:
        self.dist_y = 0.
    else:
      self.flag = 0
      self.dist_x = 0.
      self.dist_y = 0.

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
      buff.write(_get_struct_i2d().pack(_x.flag, _x.dist_x, _x.dist_y))
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
      end += 20
      (_x.flag, _x.dist_x, _x.dist_y,) = _get_struct_i2d().unpack(str[start:end])
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
      buff.write(_get_struct_i2d().pack(_x.flag, _x.dist_x, _x.dist_y))
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
      end += 20
      (_x.flag, _x.dist_x, _x.dist_y,) = _get_struct_i2d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i2d = None
def _get_struct_i2d():
    global _struct_i2d
    if _struct_i2d is None:
        _struct_i2d = struct.Struct("<i2d")
    return _struct_i2d
