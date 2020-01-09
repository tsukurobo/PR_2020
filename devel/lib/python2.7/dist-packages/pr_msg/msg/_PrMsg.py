# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pr_msg/PrMsg.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PrMsg(genpy.Message):
  _md5sum = "0b7477fdb01b1f98d79601f95a7c0be2"
  _type = "pr_msg/PrMsg"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 pick_slide
int32 pick_grasp
int32 pick_turn
int32 pick_lift
int32 kick_roll
int32 kick_fire
int32 pass_tee
"""
  __slots__ = ['pick_slide','pick_grasp','pick_turn','pick_lift','kick_roll','kick_fire','pass_tee']
  _slot_types = ['int32','int32','int32','int32','int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pick_slide,pick_grasp,pick_turn,pick_lift,kick_roll,kick_fire,pass_tee

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PrMsg, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pick_slide is None:
        self.pick_slide = 0
      if self.pick_grasp is None:
        self.pick_grasp = 0
      if self.pick_turn is None:
        self.pick_turn = 0
      if self.pick_lift is None:
        self.pick_lift = 0
      if self.kick_roll is None:
        self.kick_roll = 0
      if self.kick_fire is None:
        self.kick_fire = 0
      if self.pass_tee is None:
        self.pass_tee = 0
    else:
      self.pick_slide = 0
      self.pick_grasp = 0
      self.pick_turn = 0
      self.pick_lift = 0
      self.kick_roll = 0
      self.kick_fire = 0
      self.pass_tee = 0

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
      buff.write(_get_struct_7i().pack(_x.pick_slide, _x.pick_grasp, _x.pick_turn, _x.pick_lift, _x.kick_roll, _x.kick_fire, _x.pass_tee))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.pick_slide, _x.pick_grasp, _x.pick_turn, _x.pick_lift, _x.kick_roll, _x.kick_fire, _x.pass_tee,) = _get_struct_7i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_7i().pack(_x.pick_slide, _x.pick_grasp, _x.pick_turn, _x.pick_lift, _x.kick_roll, _x.kick_fire, _x.pass_tee))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.pick_slide, _x.pick_grasp, _x.pick_turn, _x.pick_lift, _x.kick_roll, _x.kick_fire, _x.pass_tee,) = _get_struct_7i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7i = None
def _get_struct_7i():
    global _struct_7i
    if _struct_7i is None:
        _struct_7i = struct.Struct("<7i")
    return _struct_7i
