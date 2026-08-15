#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Float4x.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Float4x_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Utils::Classes::Data::Float4x::*)(int32_t)>(&::Rewired::Utils::Classes::Data::Float4x::get_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181953870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Float4x::*)(int32_t, float_t)>(&::Rewired::Utils::Classes::Data::Float4x::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819539d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Float4x::*)(float_t, float_t, float_t, float_t)>(&::Rewired::Utils::Classes::Data::Float4x::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (::Rewired::Utils::Classes::Data::Float4x::*)()>(&::Rewired::Utils::Classes::Data::Float4x::Clone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::Clone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Clone", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.get_Zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)()>(&::Rewired::Utils::Classes::Data::Float4x::get_Zero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"get_Zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Float4x::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::Float4x::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819533d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::Float4x::*)()>(&::Rewired::Utils::Classes::Data::Float4x::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818da9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Float4x::*)(::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180646bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::Float4x::*)()>(&::Rewired::Utils::Classes::Data::Float4x::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181953770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819532c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::Subtract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181953710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Subtract", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::Multiply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819536b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::Divide)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181953370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Divide", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.GetAdditionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* (*)()>(&::Rewired::Utils::Classes::Data::Float4x::GetAdditionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181953470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetAdditionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.GetSubtractionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* (*)()>(&::Rewired::Utils::Classes::Data::Float4x::GetSubtractionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181953620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetSubtractionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.GetMultiplicationDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* (*)()>(&::Rewired::Utils::Classes::Data::Float4x::GetMultiplicationDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181953590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetMultiplicationDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.GetDivisionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* (*)()>(&::Rewired::Utils::Classes::Data::Float4x::GetDivisionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181953500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetDivisionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Implicit___Rewired__Utils__Classes__Data__Float4x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::UnityEngine::Vector4)>(&::Rewired::Utils::Classes::Data::Float4x::op_Implicit___Rewired__Utils__Classes__Data__Float4x)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Implicit___UnityEngine__Vector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181953320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::op_Addition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819538d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::op_Subtraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181953990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::op_Multiply)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181953950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, ::Rewired::Utils::Classes::Data::Float4x)>(&::Rewired::Utils::Classes::Data::Float4x::op_Division)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181953910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, float_t)>(&::Rewired::Utils::Classes::Data::Float4x::op_Addition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819538f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, float_t)>(&::Rewired::Utils::Classes::Data::Float4x::op_Subtraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819539b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, float_t)>(&::Rewired::Utils::Classes::Data::Float4x::op_Multiply)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181953970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float4x.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float4x (*)(::Rewired::Utils::Classes::Data::Float4x, float_t)>(&::Rewired::Utils::Classes::Data::Float4x::op_Division)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181953930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::Float4x::setStaticF__additionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_additionDelegate", ::Rewired::Utils::Classes::Data::Float4x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::getStaticF__additionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_additionDelegate", ::Rewired::Utils::Classes::Data::Float4x>();
}
inline void Rewired::Utils::Classes::Data::Float4x::setStaticF__subtractionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_subtractionDelegate", ::Rewired::Utils::Classes::Data::Float4x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::getStaticF__subtractionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_subtractionDelegate", ::Rewired::Utils::Classes::Data::Float4x>();
}
inline void Rewired::Utils::Classes::Data::Float4x::setStaticF__multiplicationDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_multiplicationDelegate", ::Rewired::Utils::Classes::Data::Float4x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::getStaticF__multiplicationDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_multiplicationDelegate", ::Rewired::Utils::Classes::Data::Float4x>();
}
inline void Rewired::Utils::Classes::Data::Float4x::setStaticF__divisionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_divisionDelegate", ::Rewired::Utils::Classes::Data::Float4x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::getStaticF__divisionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*, "_divisionDelegate", ::Rewired::Utils::Classes::Data::Float4x>();
}
inline float_t Rewired::Utils::Classes::Data::Float4x::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void Rewired::Utils::Classes::Data::Float4x::set_Item(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Rewired::Utils::Classes::Data::Float4x::_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::Clone(::Rewired::Utils::Classes::Data::Float4x  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Clone", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"get_Zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Float4x::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::Utils::Classes::Data::Float4x::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Float4x::Equals(::Rewired::Utils::Classes::Data::Float4x  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Rewired::Utils::Classes::Data::Float4x::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::Add(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::Subtract(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Subtract", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::Multiply(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::Divide(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"Divide", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::GetAdditionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetAdditionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::GetSubtractionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetSubtractionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::GetMultiplicationDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetMultiplicationDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::GetDivisionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"GetDivisionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Implicit___Rewired__Utils__Classes__Data__Float4x(::UnityEngine::Vector4  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Vector4 Rewired::Utils::Classes::Data::Float4x::op_Implicit___UnityEngine__Vector4(::Rewired::Utils::Classes::Data::Float4x  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Addition(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Subtraction(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Multiply(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Division(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Addition(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Subtraction(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Multiply(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float4x Rewired::Utils::Classes::Data::Float4x::op_Division(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float4x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float4x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float4x>(nullptr, ___internal_method, value1, value2);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>"
constexpr  Rewired::Utils::Classes::Data::Float4x::operator ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>*()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>* Rewired::Utils::Classes::Data::Float4x::i___System__IEquatable_1___Rewired__Utils__Classes__Data__Float4x_()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "a", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "c", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::Float4x::Float4x(float_t  a, float_t  b, float_t  c, float_t  d) noexcept  {
this->a = a;
this->b = b;
this->c = c;
this->d = d;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::Float4x::Float4x()   {
}
