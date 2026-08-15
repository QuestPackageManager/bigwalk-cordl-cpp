#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/InitializeOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::InitializeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::InitializeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>)>(&::Epic::OnlineServices::Platform::InitializeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804f7bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::InitializeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::InitializeOptionsInternal::*)()>(&::Epic::OnlineServices::Platform::InitializeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f7b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::InitializeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::InitializeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>"
constexpr  Epic::OnlineServices::Platform::InitializeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>* Epic::OnlineServices::Platform::InitializeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__InitializeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::InitializeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::InitializeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocateMemoryFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReallocateMemoryFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleaseMemoryFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductVersion", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SystemInitializeOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideThreadAffinity", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::InitializeOptionsInternal::InitializeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AllocateMemoryFunction, ::System::IntPtr  m_ReallocateMemoryFunction, ::System::IntPtr  m_ReleaseMemoryFunction, ::System::IntPtr  m_ProductName, ::System::IntPtr  m_ProductVersion, ::System::IntPtr  m_Reserved, ::System::IntPtr  m_SystemInitializeOptions, ::System::IntPtr  m_OverrideThreadAffinity) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AllocateMemoryFunction = m_AllocateMemoryFunction;
this->m_ReallocateMemoryFunction = m_ReallocateMemoryFunction;
this->m_ReleaseMemoryFunction = m_ReleaseMemoryFunction;
this->m_ProductName = m_ProductName;
this->m_ProductVersion = m_ProductVersion;
this->m_Reserved = m_Reserved;
this->m_SystemInitializeOptions = m_SystemInitializeOptions;
this->m_OverrideThreadAffinity = m_OverrideThreadAffinity;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::InitializeOptionsInternal::InitializeOptionsInternal()   {
}
