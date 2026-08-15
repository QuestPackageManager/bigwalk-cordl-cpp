#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Float2x.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Float2x_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Utils::Classes::Data::Float2x::*)(int32_t)>(&::Rewired::Utils::Classes::Data::Float2x::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Float2x::*)(int32_t, float_t)>(&::Rewired::Utils::Classes::Data::Float2x::set_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Float2x::*)(float_t, float_t)>(&::Rewired::Utils::Classes::Data::Float2x::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (::Rewired::Utils::Classes::Data::Float2x::*)()>(&::Rewired::Utils::Classes::Data::Float2x::Clone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180646ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::Clone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181913190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Clone", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.get_Zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)()>(&::Rewired::Utils::Classes::Data::Float2x::get_Zero)> {
  constexpr static std::size_t size = 0x7c30;
  constexpr static std::size_t addrs = 0x180e8cfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"get_Zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Float2x::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::Float2x::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181952630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::Float2x::*)()>(&::Rewired::Utils::Classes::Data::Float2x::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819527d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Float2x::*)(::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f60a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::Float2x::*)()>(&::Rewired::Utils::Classes::Data::Float2x::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819529c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::Add)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819525b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::Subtract)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Subtract", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::Multiply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::Divide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819525f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Divide", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.GetAdditionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* (*)()>(&::Rewired::Utils::Classes::Data::Float2x::GetAdditionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819526b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetAdditionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.GetSubtractionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* (*)()>(&::Rewired::Utils::Classes::Data::Float2x::GetSubtractionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819528b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetSubtractionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.GetMultiplicationDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* (*)()>(&::Rewired::Utils::Classes::Data::Float2x::GetMultiplicationDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181952820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetMultiplicationDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.GetDivisionDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* (*)()>(&::Rewired::Utils::Classes::Data::Float2x::GetDivisionDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181952740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetDivisionDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Implicit___Rewired__Utils__Classes__Data__Float2x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::UnityEngine::Vector2)>(&::Rewired::Utils::Classes::Data::Float2x::op_Implicit___Rewired__Utils__Classes__Data__Float2x)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181913190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181913190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::op_Addition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::op_Subtraction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::op_Multiply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, ::Rewired::Utils::Classes::Data::Float2x)>(&::Rewired::Utils::Classes::Data::Float2x::op_Division)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819525f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, float_t)>(&::Rewired::Utils::Classes::Data::Float2x::op_Addition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181952a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, float_t)>(&::Rewired::Utils::Classes::Data::Float2x::op_Subtraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181952b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, float_t)>(&::Rewired::Utils::Classes::Data::Float2x::op_Multiply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181952af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Float2x.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Float2x (*)(::Rewired::Utils::Classes::Data::Float2x, float_t)>(&::Rewired::Utils::Classes::Data::Float2x::op_Division)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181952ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::Float2x::setStaticF__additionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_additionDelegate", ::Rewired::Utils::Classes::Data::Float2x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::getStaticF__additionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_additionDelegate", ::Rewired::Utils::Classes::Data::Float2x>();
}
inline void Rewired::Utils::Classes::Data::Float2x::setStaticF__subtractionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_subtractionDelegate", ::Rewired::Utils::Classes::Data::Float2x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::getStaticF__subtractionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_subtractionDelegate", ::Rewired::Utils::Classes::Data::Float2x>();
}
inline void Rewired::Utils::Classes::Data::Float2x::setStaticF__multiplicationDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_multiplicationDelegate", ::Rewired::Utils::Classes::Data::Float2x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::getStaticF__multiplicationDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_multiplicationDelegate", ::Rewired::Utils::Classes::Data::Float2x>();
}
inline void Rewired::Utils::Classes::Data::Float2x::setStaticF__divisionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_divisionDelegate", ::Rewired::Utils::Classes::Data::Float2x>(std::forward<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(value));
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::getStaticF__divisionDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*, "_divisionDelegate", ::Rewired::Utils::Classes::Data::Float2x>();
}
inline float_t Rewired::Utils::Classes::Data::Float2x::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void Rewired::Utils::Classes::Data::Float2x::set_Item(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Rewired::Utils::Classes::Data::Float2x::_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::Clone(::Rewired::Utils::Classes::Data::Float2x  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Clone", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"get_Zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Float2x::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::Utils::Classes::Data::Float2x::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Float2x::Equals(::Rewired::Utils::Classes::Data::Float2x  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Rewired::Utils::Classes::Data::Float2x::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::Add(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Add", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::Subtract(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Subtract", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::Multiply(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::Divide(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"Divide", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::GetAdditionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetAdditionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::GetSubtractionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetSubtractionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::GetMultiplicationDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetMultiplicationDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(nullptr, ___internal_method);
}
inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::GetDivisionDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"GetDivisionDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Implicit___Rewired__Utils__Classes__Data__Float2x(::UnityEngine::Vector2  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Vector2 Rewired::Utils::Classes::Data::Float2x::op_Implicit___UnityEngine__Vector2(::Rewired::Utils::Classes::Data::Float2x  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Addition(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Subtraction(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Multiply(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Division(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Addition(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Subtraction(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Multiply(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
inline ::Rewired::Utils::Classes::Data::Float2x Rewired::Utils::Classes::Data::Float2x::op_Division(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Float2x>(),
                        {"op_Division", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Float2x>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Float2x>(nullptr, ___internal_method, value1, value2);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>"
constexpr  Rewired::Utils::Classes::Data::Float2x::operator ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>*()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>* Rewired::Utils::Classes::Data::Float2x::i___System__IEquatable_1___Rewired__Utils__Classes__Data__Float2x_()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "a", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::Float2x::Float2x(float_t  a, float_t  b) noexcept  {
this->a = a;
this->b = b;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::Float2x::Float2x()   {
}
