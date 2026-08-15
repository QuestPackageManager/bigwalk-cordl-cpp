#pragma once
// IWYU pragma private; include "UnityEngine/Vector2Int.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_x)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_x", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.set_x
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2Int::*)(int32_t)>(&::UnityEngine::Vector2Int::set_x)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"set_x", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_y)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_y", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.set_y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2Int::*)(int32_t)>(&::UnityEngine::Vector2Int::set_y)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"set_y", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2Int::*)(int32_t, int32_t)>(&::UnityEngine::Vector2Int::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_magnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_magnitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18202cde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_magnitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_sqrMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_sqrMagnitude)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181517df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_sqrMagnitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::Max)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181f003a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181eec0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.FloorToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::UnityEngine::Vector2Int::FloorToInt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18227af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"FloorToInt", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.RoundToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::UnityEngine::Vector2Int::RoundToInt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181517db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"RoundToInt", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Addition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181f9a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Addition", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Subtraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181f9a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(int32_t, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Multiply)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181f9a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Multiply", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, int32_t)>(&::UnityEngine::Vector2Int::op_Division)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181f9a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Division", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2Int::*)(::System::Object*)>(&::UnityEngine::Vector2Int::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180651a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Vector2Int>(),
                    {::i2c::class_of<::UnityEngine::Vector2Int>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2Int::*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18098c590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2Int::*)(::by_ref<::UnityEngine::Vector2Int>)>(&::UnityEngine::Vector2Int::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180651ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18098c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Vector2Int>(),
                    {::i2c::class_of<::UnityEngine::Vector2Int>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180c6d1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Vector2Int>(),
                    {::i2c::class_of<::UnityEngine::Vector2Int>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Vector2Int::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Vector2Int::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180c6d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_zero)> {
  constexpr static std::size_t size = 0x7c30;
  constexpr static std::size_t addrs = 0x180e8cfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_one
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_one)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_one", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_up)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_down)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_down", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_left)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18227b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_left", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_right)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_right", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Vector2Int::setStaticF_s_Zero(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Zero", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Zero()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Zero", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_One(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_One", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_One()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_One", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Up(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Up", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Up()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Up", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Down(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Down", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Down()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Down", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Left(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Left", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Left()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Left", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Right(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Right", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Right()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Right", ::UnityEngine::Vector2Int>();
}
inline int32_t UnityEngine::Vector2Int::get_x()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_x", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Vector2Int::set_x(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"set_x", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Vector2Int::get_y()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_y", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Vector2Int::set_y(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"set_y", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Vector2Int::_ctor(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline float_t UnityEngine::Vector2Int::get_magnitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_magnitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Vector2Int::get_sqrMagnitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_sqrMagnitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::Max(::UnityEngine::Vector2Int  lhs, ::UnityEngine::Vector2Int  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2Int::op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::FloorToInt(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"FloorToInt", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::RoundToInt(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"RoundToInt", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Addition(::UnityEngine::Vector2Int  a, ::UnityEngine::Vector2Int  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Addition", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Subtraction(::UnityEngine::Vector2Int  a, ::UnityEngine::Vector2Int  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Multiply(int32_t  a, ::UnityEngine::Vector2Int  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Multiply", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Division(::UnityEngine::Vector2Int  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Division", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Vector2Int::op_Equality(::UnityEngine::Vector2Int  lhs, ::UnityEngine::Vector2Int  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Vector2Int::op_Inequality(::UnityEngine::Vector2Int  lhs, ::UnityEngine::Vector2Int  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Vector2Int::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Vector2Int>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Vector2Int::Equals(::UnityEngine::Vector2Int  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Vector2Int::Equals(::by_ref<::UnityEngine::Vector2Int>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Vector2Int::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Vector2Int>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Vector2Int::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Vector2Int>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Vector2Int::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_one()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_one", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_down()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_down", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_left()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_left", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2Int>(),
                        {"get_right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
constexpr  UnityEngine::Vector2Int::operator ::System::IEquatable_1<::UnityEngine::Vector2Int>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
constexpr ::System::IEquatable_1<::UnityEngine::Vector2Int>* UnityEngine::Vector2Int::i___System__IEquatable_1___UnityEngine__Vector2Int_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  UnityEngine::Vector2Int::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Vector2Int::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Vector2Int::Vector2Int(int32_t  m_X, int32_t  m_Y) noexcept  {
this->m_X = m_X;
this->m_Y = m_Y;
}
// Ctor Parameters []
constexpr ::UnityEngine::Vector2Int::Vector2Int()   {
}
