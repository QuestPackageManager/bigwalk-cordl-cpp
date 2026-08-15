#pragma once
// IWYU pragma private; include "Rewired/UI/ITouchInputSource.hpp"
#include "Rewired/UI/zzzz__ITouchInputSource_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
//  Writing Method size for method: ::Rewired::UI::ITouchInputSource.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::UI::ITouchInputSource::*)()>(&::Rewired::UI::ITouchInputSource::get_playerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UI::ITouchInputSource*>(),
                    {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UI::ITouchInputSource.get_touchSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UI::ITouchInputSource::*)()>(&::Rewired::UI::ITouchInputSource::get_touchSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UI::ITouchInputSource*>(),
                    {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UI::ITouchInputSource.get_touchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::UI::ITouchInputSource::*)()>(&::Rewired::UI::ITouchInputSource::get_touchCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UI::ITouchInputSource*>(),
                    {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UI::ITouchInputSource.GetTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (::Rewired::UI::ITouchInputSource::*)(int32_t)>(&::Rewired::UI::ITouchInputSource::GetTouch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UI::ITouchInputSource*>(),
                    {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 3}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::UI::ITouchInputSource::get_playerId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::UI::ITouchInputSource::get_touchSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::UI::ITouchInputSource::get_touchCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Touch Rewired::UI::ITouchInputSource::GetTouch(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UI::ITouchInputSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(this, ___internal_method, index);
}
