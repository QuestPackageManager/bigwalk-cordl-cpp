#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioVolumeStruct.hpp"
#include "GlobalNamespace/zzzz__AudioVolumeStruct_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.get_UniqueID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::AudioVolumeStruct::*)()>(&::GlobalNamespace::AudioVolumeStruct::get_UniqueID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"get_UniqueID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioVolumeStruct::*)()>(&::GlobalNamespace::AudioVolumeStruct::get_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioVolumeStruct::*)(float_t, ::StringW)>(&::GlobalNamespace::AudioVolumeStruct::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804824b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioVolumeStruct::*)(::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::CompareTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804823c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolumeStruct, ::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_GreaterThan)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolumeStruct, ::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_LessThan)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804825d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolumeStruct, ::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolumeStruct, ::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804825b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolumeStruct, ::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioVolumeStruct, ::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioVolumeStruct::*)(::System::Object*)>(&::GlobalNamespace::AudioVolumeStruct::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180482400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                    {::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioVolumeStruct::*)()>(&::GlobalNamespace::AudioVolumeStruct::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180482480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                    {::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::AudioVolumeStruct)>(&::GlobalNamespace::AudioVolumeStruct::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioVolumeStruct.op_Implicit___GlobalNamespace__AudioVolumeStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolumeStruct (*)(float_t)>(&::GlobalNamespace::AudioVolumeStruct::op_Implicit___GlobalNamespace__AudioVolumeStruct)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180482560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioVolumeStruct::setStaticF__lastId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "_lastId", ::GlobalNamespace::AudioVolumeStruct>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::AudioVolumeStruct::getStaticF__lastId()  {
return ::cordl_internals::getStaticField<int64_t, "_lastId", ::GlobalNamespace::AudioVolumeStruct>();
}
inline int64_t GlobalNamespace::AudioVolumeStruct::get_UniqueID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"get_UniqueID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioVolumeStruct::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioVolumeStruct::_ctor(float_t  vol, ::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vol, identifier);
}
inline int32_t GlobalNamespace::AudioVolumeStruct::CompareTo(::GlobalNamespace::AudioVolumeStruct  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::AudioVolumeStruct::op_GreaterThan(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolumeStruct::op_LessThan(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolumeStruct::op_GreaterThanOrEqual(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolumeStruct::op_LessThanOrEqual(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolumeStruct::op_Equality(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolumeStruct::op_Inequality(::GlobalNamespace::AudioVolumeStruct  operand1, ::GlobalNamespace::AudioVolumeStruct  operand2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>(), ::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operand1, operand2);
}
inline bool GlobalNamespace::AudioVolumeStruct::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t GlobalNamespace::AudioVolumeStruct::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioVolumeStruct::op_Implicit_float_t(::GlobalNamespace::AudioVolumeStruct  av)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AudioVolumeStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, av);
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::AudioVolumeStruct::op_Implicit___GlobalNamespace__AudioVolumeStruct(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioVolumeStruct>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolumeStruct>(nullptr, ___internal_method, f);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>"
constexpr  GlobalNamespace::AudioVolumeStruct::operator ::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>"
constexpr ::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>* GlobalNamespace::AudioVolumeStruct::i___System__IComparable_1___GlobalNamespace__AudioVolumeStruct_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AudioVolumeStruct>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioVolume"
constexpr  GlobalNamespace::AudioVolumeStruct::operator ::GlobalNamespace::IAudioVolume*()  {
return static_cast<::GlobalNamespace::IAudioVolume*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IAudioVolume"
constexpr ::GlobalNamespace::IAudioVolume* GlobalNamespace::AudioVolumeStruct::i___GlobalNamespace__IAudioVolume()  {
return static_cast<::GlobalNamespace::IAudioVolume*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_UniqueID_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioVolumeStruct::AudioVolumeStruct(int64_t  _UniqueID_k__BackingField, float_t  _value) noexcept  {
this->_UniqueID_k__BackingField = _UniqueID_k__BackingField;
this->_value = _value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioVolumeStruct::AudioVolumeStruct()   {
}
