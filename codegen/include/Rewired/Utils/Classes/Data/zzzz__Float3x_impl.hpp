#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Float3x.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Float3x_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Utils::Classes::Data::Float3x::*)(int32_t)>(&::Rewired::Utils::Classes::Data::Float3x::get_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Float3x::*)(int32_t, float_t)>(&::Rewired::Utils::Classes::Data::Float3x::set_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Float3x::*)(float_t, float_t, float_t)>(&::Rewired::Utils::Classes::Data::Float3x::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d5770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (::Rewired::Utils::Classes::Data::Float3x::*)()>(&::Rewired::Utils::Classes::Data::Float3x::Clone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::Clone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Clone", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.get_Zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)()>(&::Rewired::Utils::Classes::Data::Float3x::get_Zero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"get_Zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Float3x::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::Float3x::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181952c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::Float3x::*)()>(&::Rewired::Utils::Classes::Data::Float3x::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181952e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Float3x::*)(::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180646c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::Float3x::*)()>(&::Rewired::Utils::Classes::Data::Float3x::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181953070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181952bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::Subtract)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Subtract", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::Multiply)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181952fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::Divide)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181952c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Divide", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.GetAdditionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* (*)()>(&::Rewired::Utils::Classes::Data::Float3x::GetAdditionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181952d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetAdditionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.GetSubtractionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* (*)()>(&::Rewired::Utils::Classes::Data::Float3x::GetSubtractionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181952f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetSubtractionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.GetMultiplicationDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* (*)()>(&::Rewired::Utils::Classes::Data::Float3x::GetMultiplicationDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181952eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetMultiplicationDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.GetDivisionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* (*)()>(&::Rewired::Utils::Classes::Data::Float3x::GetDivisionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181952dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetDivisionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Implicit___Rewired__Utils__Classes__Data__Float3x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::UnityEngine::Vector3)>(&::Rewired::Utils::Classes::Data::Float3x::op_Implicit___Rewired__Utils__Classes__Data__Float3x)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Implicit___UnityEngine__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::op_Addition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802dc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::op_Subtraction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802d57b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::op_Multiply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181953200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, ::Rewired::Utils::Classes::Data::Float3x)>(&::Rewired::Utils::Classes::Data::Float3x::op_Division)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819531c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, float_t)>(&::Rewired::Utils::Classes::Data::Float3x::op_Addition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181953190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, float_t)>(&::Rewired::Utils::Classes::Data::Float3x::op_Subtraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181953240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, float_t)>(&::Rewired::Utils::Classes::Data::Float3x::op_Multiply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802dc490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float3x.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float3x (*)(::Rewired::Utils::Classes::Data::Float3x, float_t)>(&::Rewired::Utils::Classes::Data::Float3x::op_Division)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181931cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::Float3x::setStaticF__additionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_additionDelegate", ::Rewired::Utils::Classes::Data::Float3x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::getStaticF__additionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_additionDelegate", ::Rewired::Utils::Classes::Data::Float3x>();
}
inline void Rewired::Utils::Classes::Data::Float3x::setStaticF__subtractionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_subtractionDelegate", ::Rewired::Utils::Classes::Data::Float3x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::getStaticF__subtractionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_subtractionDelegate", ::Rewired::Utils::Classes::Data::Float3x>();
}
inline void Rewired::Utils::Classes::Data::Float3x::setStaticF__multiplicationDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_multiplicationDelegate", ::Rewired::Utils::Classes::Data::Float3x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::getStaticF__multiplicationDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_multiplicationDelegate", ::Rewired::Utils::Classes::Data::Float3x>();
}
inline void Rewired::Utils::Classes::Data::Float3x::setStaticF__divisionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_divisionDelegate", ::Rewired::Utils::Classes::Data::Float3x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::getStaticF__divisionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*, "_divisionDelegate", ::Rewired::Utils::Classes::Data::Float3x>();
}
inline float_t Rewired::Utils::Classes::Data::Float3x::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void Rewired::Utils::Classes::Data::Float3x::set_Item(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Rewired::Utils::Classes::Data::Float3x::_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::Clone(::Rewired::Utils::Classes::Data::Float3x  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Clone", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"get_Zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Float3x::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::Utils::Classes::Data::Float3x::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Float3x::Equals(::Rewired::Utils::Classes::Data::Float3x  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Rewired::Utils::Classes::Data::Float3x::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::Add(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::Subtract(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Subtract", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::Multiply(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::Divide(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"Divide", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::GetAdditionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetAdditionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::GetSubtractionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetSubtractionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::GetMultiplicationDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetMultiplicationDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::GetDivisionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"GetDivisionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x,::Rewired::Utils::Classes::Data::Float3x>*>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Implicit___Rewired__Utils__Classes__Data__Float3x(::UnityEngine::Vector3  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Vector3 Rewired::Utils::Classes::Data::Float3x::op_Implicit___UnityEngine__Vector3(::Rewired::Utils::Classes::Data::Float3x  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Addition(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Subtraction(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Multiply(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Division(::Rewired::Utils::Classes::Data::Float3x  value1, ::Rewired::Utils::Classes::Data::Float3x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Addition(::Rewired::Utils::Classes::Data::Float3x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Subtraction(::Rewired::Utils::Classes::Data::Float3x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Multiply(::Rewired::Utils::Classes::Data::Float3x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float3x Rewired::Utils::Classes::Data::Float3x::op_Division(::Rewired::Utils::Classes::Data::Float3x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float3x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float3x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float3x>(nullptr, ___internal_method, value1, value2);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float3x>"
constexpr  Rewired::Utils::Classes::Data::Float3x::operator ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float3x>*()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float3x>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float3x>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float3x>* Rewired::Utils::Classes::Data::Float3x::i___System__IEquatable_1___Rewired__Utils__Classes__Data__Float3x_()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float3x>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "a", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "c", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::Float3x::Float3x(float_t  a, float_t  b, float_t  c) noexcept  {
this->a = a;
this->b = b;
this->c = c;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::Float3x::Float3x()   {
}
