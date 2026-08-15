#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/TypeWrapper.hpp"
#include "GlobalNamespace/zzzz__qBWyugAMXKGLKcRNPDuTbJFzTVsE_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType::TypeWrapper_DataType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType::TypeWrapper_DataType()   {
}
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Byte{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::SByte{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Char{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Int16{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::UInt16{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Int32{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::UInt32{static_cast<int32_t>(0x7)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Int64{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::UInt64{static_cast<int32_t>(0x9)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Single{static_cast<int32_t>(0xa)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Double{static_cast<int32_t>(0xb)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Boolean{static_cast<int32_t>(0xc)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::String{static_cast<int32_t>(0xd)};
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Utils::Classes::Data::TypeWrapper_DataType::Object{static_cast<int32_t>(0xe)};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(::Rewired::Utils::Classes::Data::TypeWrapper_DataType)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(uint8_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819581f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(int8_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819584a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(char16_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(int16_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181957f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(uint16_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819580d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(int32_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819583e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(uint32_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(int64_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(uint64_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(float_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(double_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(bool)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181957fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(::StringW)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819582c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::TypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181958250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::TypeWrapper::*)()>(&::Rewired::Utils::Classes::Data::TypeWrapper::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181957ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_uint8_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint8_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_int8_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int8_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819589f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_char16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_char16_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819586c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_int16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int16_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819589a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_int64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_uint16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint16_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint32_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint64_t)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_double_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181958b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(uint8_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(int8_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(char16_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(int16_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(int32_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(int64_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(uint16_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(uint32_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181958dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(uint64_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819585b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(float_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819587c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(double_t)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181958940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(bool)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819588e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::TypeWrapper.op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (*)(::StringW)>(&::Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181958820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(::Rewired::Utils::Classes::Data::TypeWrapper_DataType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(uint8_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(int8_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(char16_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(int16_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(uint16_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(uint32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(int64_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(uint64_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(float_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(double_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::TypeWrapper::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint8_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, obj);
}
inline int8_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int8_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj);
}
inline char16_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_char16_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj);
}
inline int16_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int16_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj);
}
inline int32_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int32_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj);
}
inline int64_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_int64_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj);
}
inline uint16_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint16_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, obj);
}
inline uint32_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint32_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, obj);
}
inline uint64_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_uint64_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, obj);
}
inline float_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_float_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj);
}
inline double_t Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_double_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj);
}
inline bool Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit_bool(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::StringW Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___StringW(::Rewired::Utils::Classes::Data::TypeWrapper  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint8_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int8_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(char16_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int16_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int32_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int64_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint16_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint32_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint64_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(float_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(double_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(bool  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::Data::TypeWrapper::op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(::StringW  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::TypeWrapper>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "type", ty: "::Rewired::Utils::Classes::Data::TypeWrapper_DataType", modifiers: "", def_value: Some("{}") }, CppParam { name: "WpTjzngerFPTAZiUbUEcfVdvFZID", ty: "::GlobalNamespace::qBWyugAMXKGLKcRNPDuTbJFzTVsE", modifiers: "", def_value: Some("{}") }, CppParam { name: "EXYVzjucwevhPPTTrnycVDnhnhWF", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "HcntLiMlimDCufoyEaZIRPMsMLiMA", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper::TypeWrapper(::Rewired::Utils::Classes::Data::TypeWrapper_DataType  type, ::GlobalNamespace::qBWyugAMXKGLKcRNPDuTbJFzTVsE  WpTjzngerFPTAZiUbUEcfVdvFZID, ::StringW  EXYVzjucwevhPPTTrnycVDnhnhWF, ::System::Object*  HcntLiMlimDCufoyEaZIRPMsMLiMA) noexcept  {
this->type = type;
this->WpTjzngerFPTAZiUbUEcfVdvFZID = WpTjzngerFPTAZiUbUEcfVdvFZID;
this->EXYVzjucwevhPPTTrnycVDnhnhWF = EXYVzjucwevhPPTTrnycVDnhnhWF;
this->HcntLiMlimDCufoyEaZIRPMsMLiMA = HcntLiMlimDCufoyEaZIRPMsMLiMA;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper::TypeWrapper()   {
}
