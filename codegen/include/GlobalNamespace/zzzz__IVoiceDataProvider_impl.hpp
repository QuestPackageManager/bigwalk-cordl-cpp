#pragma once
// IWYU pragma private; include "GlobalNamespace/IVoiceDataProvider.hpp"
#include "GlobalNamespace/zzzz__IVoiceDataProvider_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVoiceDataProvider.get_CachedVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::IVoiceDataProvider::*)()>(&::GlobalNamespace::IVoiceDataProvider::get_CachedVoiceData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVoiceDataProvider.get_CachedVoiceWriteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IVoiceDataProvider::*)()>(&::GlobalNamespace::IVoiceDataProvider::get_CachedVoiceWriteHead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVoiceDataProvider.get_RecommendedVoiceReadHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IVoiceDataProvider::*)()>(&::GlobalNamespace::IVoiceDataProvider::get_RecommendedVoiceReadHead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVoiceDataProvider.add_OnWriteHeadJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVoiceDataProvider::*)(::System::Action*)>(&::GlobalNamespace::IVoiceDataProvider::add_OnWriteHeadJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVoiceDataProvider.remove_OnWriteHeadJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVoiceDataProvider::*)(::System::Action*)>(&::GlobalNamespace::IVoiceDataProvider::remove_OnWriteHeadJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<float_t> GlobalNamespace::IVoiceDataProvider::get_CachedVoiceData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IVoiceDataProvider::get_CachedVoiceWriteHead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IVoiceDataProvider::get_RecommendedVoiceReadHead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::IVoiceDataProvider::add_OnWriteHeadJump(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IVoiceDataProvider::remove_OnWriteHeadJump(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVoiceDataProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
