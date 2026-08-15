#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/SafeTranslatorUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__SafeTranslatorUtility_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility.TryConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<uint32_t>)>(&::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180546400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility.TryConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<int32_t>)>(&::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805463f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility.TryConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<int64_t>)>(&::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805463d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility.TryConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::by_ref<uint64_t>)>(&::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805463c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert(int32_t  value, ::by_ref<uint32_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, output);
}
inline bool PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert(uint32_t  value, ::by_ref<int32_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, output);
}
inline bool PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert(uint64_t  value, ::by_ref<int64_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, output);
}
inline bool PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::TryConvert(int64_t  value, ::by_ref<uint64_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility*>(),
                        {"TryConvert", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, output);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::SafeTranslatorUtility::SafeTranslatorUtility()   {
}
