#pragma once
// IWYU pragma private; include "Rewired/UnknownControllerHat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__UnknownControllerHat_def.hpp"
#include "Rewired/zzzz__UnknownControllerHat_def.hpp"
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::UnknownControllerHat_HatButtons::*)(int32_t)>(&::Rewired::UnknownControllerHat_HatButtons::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181843500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnknownControllerHat_HatButtons::*)(::ArrayW<int32_t>)>(&::Rewired::UnknownControllerHat_HatButtons::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons.GetNeighbors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnknownControllerHat_HatButtons::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Rewired::UnknownControllerHat_HatButtons::GetNeighbors)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181843330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"GetNeighbors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons.IsCardinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UnknownControllerHat_HatButtons::*)(int32_t)>(&::Rewired::UnknownControllerHat_HatButtons::IsCardinal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181843440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"IsCardinal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons.IsCorner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UnknownControllerHat_HatButtons::*)(int32_t)>(&::Rewired::UnknownControllerHat_HatButtons::IsCorner)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818434a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"IsCorner", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::UnknownControllerHat_HatButtons::*)(int32_t)>(&::Rewired::UnknownControllerHat_HatButtons::IndexOf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818433f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat_HatButtons.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UnknownControllerHat_HatButtons::*)(int32_t)>(&::Rewired::UnknownControllerHat_HatButtons::Contains)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818432e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Rewired::UnknownControllerHat_HatButtons::__cordl_internal_get_wzaZTVpRyfejMleYZxSVPFsyvDIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wzaZTVpRyfejMleYZxSVPFsyvDIn;
}
constexpr ::ArrayW<int32_t> const& Rewired::UnknownControllerHat_HatButtons::__cordl_internal_get_wzaZTVpRyfejMleYZxSVPFsyvDIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wzaZTVpRyfejMleYZxSVPFsyvDIn;
}
constexpr void Rewired::UnknownControllerHat_HatButtons::__cordl_internal_set_wzaZTVpRyfejMleYZxSVPFsyvDIn(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wzaZTVpRyfejMleYZxSVPFsyvDIn = value;
}
inline int32_t Rewired::UnknownControllerHat_HatButtons::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void Rewired::UnknownControllerHat_HatButtons::_ctor(::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::UnknownControllerHat_HatButtons::GetNeighbors(int32_t  button, ::by_ref<int32_t>  neighbor1, ::by_ref<int32_t>  neighbor2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"GetNeighbors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, neighbor1, neighbor2);
}
inline bool Rewired::UnknownControllerHat_HatButtons::IsCardinal(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"IsCardinal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::UnknownControllerHat_HatButtons::IsCorner(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"IsCorner", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline int32_t Rewired::UnknownControllerHat_HatButtons::IndexOf(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, button);
}
inline bool Rewired::UnknownControllerHat_HatButtons::Contains(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat_HatButtons*>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::Rewired::UnknownControllerHat_HatButtons* Rewired::UnknownControllerHat_HatButtons::New_ctor(::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::UnknownControllerHat_HatButtons*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::UnknownControllerHat_HatButtons::UnknownControllerHat_HatButtons()   {
}
//  Writing Method size for method: ::Rewired::UnknownControllerHat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnknownControllerHat::*)(::Rewired::UnknownControllerHat_HatButtons*)>(&::Rewired::UnknownControllerHat::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::UnknownControllerHat_HatButtons*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat.ContainsButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UnknownControllerHat::*)(int32_t)>(&::Rewired::UnknownControllerHat::ContainsButtonIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181847af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {"ContainsButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat.IsButtonIndexCardinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UnknownControllerHat::*)(int32_t)>(&::Rewired::UnknownControllerHat::IsButtonIndexCardinal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181847b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {"IsButtonIndexCardinal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnknownControllerHat.GetButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UnknownControllerHat_HatButtons* (::Rewired::UnknownControllerHat::*)()>(&::Rewired::UnknownControllerHat::GetButtons)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {"GetButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::UnknownControllerHat_HatButtons*& Rewired::UnknownControllerHat::__cordl_internal_get_yOjDFcHzQBGZfGWqGJFBjiIPmADdb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yOjDFcHzQBGZfGWqGJFBjiIPmADdb;
}
constexpr ::Rewired::UnknownControllerHat_HatButtons* const& Rewired::UnknownControllerHat::__cordl_internal_get_yOjDFcHzQBGZfGWqGJFBjiIPmADdb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yOjDFcHzQBGZfGWqGJFBjiIPmADdb;
}
constexpr void Rewired::UnknownControllerHat::__cordl_internal_set_yOjDFcHzQBGZfGWqGJFBjiIPmADdb(::Rewired::UnknownControllerHat_HatButtons*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yOjDFcHzQBGZfGWqGJFBjiIPmADdb = value;
}
inline void Rewired::UnknownControllerHat::_ctor(::Rewired::UnknownControllerHat_HatButtons*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::UnknownControllerHat_HatButtons*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::UnknownControllerHat::ContainsButtonIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {"ContainsButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool Rewired::UnknownControllerHat::IsButtonIndexCardinal(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {"IsButtonIndexCardinal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline ::Rewired::UnknownControllerHat_HatButtons* Rewired::UnknownControllerHat::GetButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnknownControllerHat*>(),
                        {"GetButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UnknownControllerHat_HatButtons*>(this, ___internal_method);
}
inline ::Rewired::UnknownControllerHat* Rewired::UnknownControllerHat::New_ctor(::Rewired::UnknownControllerHat_HatButtons*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::UnknownControllerHat*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::UnknownControllerHat::UnknownControllerHat()   {
}
