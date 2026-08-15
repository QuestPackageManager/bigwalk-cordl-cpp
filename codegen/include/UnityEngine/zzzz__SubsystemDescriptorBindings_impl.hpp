#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemDescriptorBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SubsystemDescriptorBindings_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemDescriptorBindings.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::SubsystemDescriptorBindings::GetId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18230da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemDescriptorBindings*>(),
                        {"GetId", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemDescriptorBindings.GetId_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SubsystemDescriptorBindings::GetId_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemDescriptorBindings*>(),
                        {"GetId_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::SubsystemDescriptorBindings::GetId(::System::IntPtr  descriptorPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemDescriptorBindings*>(),
                        {"GetId", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, descriptorPtr);
}
inline void UnityEngine::SubsystemDescriptorBindings::GetId_Injected(::System::IntPtr  descriptorPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemDescriptorBindings*>(),
                        {"GetId_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptorPtr, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemDescriptorBindings::SubsystemDescriptorBindings()   {
}
