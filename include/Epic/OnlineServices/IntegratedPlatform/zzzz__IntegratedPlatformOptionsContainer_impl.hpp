#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformOptionsContainer.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainer_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainerAddOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamIntegratedPlatformOptionsContainerAddOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::*)()>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::*)(::System::IntPtr)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::Add)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805177e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {"Add", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::*)()>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180517900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::Add)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180517860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {"Add", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::Add(::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>  inOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {"Add", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, inOptions);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::Add(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>  inOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(),
                        {"Add", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, inOptions);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>());
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer::IntegratedPlatformOptionsContainer()   {
}
