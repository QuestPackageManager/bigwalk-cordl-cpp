#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/InitializeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__InitializeThreadAffinity_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InitializeOptions)
namespace Epic::OnlineServices::Platform {
struct InitializeThreadAffinity;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct InitializeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::InitializeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::InitializeOptions, "Epic.OnlineServices.Platform", "InitializeOptions");
// Dependencies Epic.OnlineServices.Platform.InitializeThreadAffinity, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.InitializeOptions
struct CORDL_TYPE InitializeOptions {
public:
// Declarations
 __declspec(property(get=get_AllocateMemoryFunction, put=set_AllocateMemoryFunction)) ::System::IntPtr  AllocateMemoryFunction;

 __declspec(property(get=get_OverrideThreadAffinity, put=set_OverrideThreadAffinity)) ::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  OverrideThreadAffinity;

 __declspec(property(get=get_ProductName, put=set_ProductName)) ::Epic::OnlineServices::Utf8String*  ProductName;

 __declspec(property(get=get_ProductVersion, put=set_ProductVersion)) ::Epic::OnlineServices::Utf8String*  ProductVersion;

 __declspec(property(get=get_ReallocateMemoryFunction, put=set_ReallocateMemoryFunction)) ::System::IntPtr  ReallocateMemoryFunction;

 __declspec(property(get=get_ReleaseMemoryFunction, put=set_ReleaseMemoryFunction)) ::System::IntPtr  ReleaseMemoryFunction;

 __declspec(property(get=get_Reserved, put=set_Reserved)) ::System::IntPtr  Reserved;

 __declspec(property(get=get_SystemInitializeOptions, put=set_SystemInitializeOptions)) ::System::IntPtr  SystemInitializeOptions;

/// @brief Method get_AllocateMemoryFunction, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_AllocateMemoryFunction() ;

/// @brief Method get_OverrideThreadAffinity, addr 0x1804f66c0, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity> get_OverrideThreadAffinity() ;

/// @brief Method get_ProductName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductName() ;

/// @brief Method get_ProductVersion, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductVersion() ;

/// @brief Method get_ReallocateMemoryFunction, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ReallocateMemoryFunction() ;

/// @brief Method get_ReleaseMemoryFunction, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ReleaseMemoryFunction() ;

/// @brief Method get_Reserved, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Reserved() ;

/// @brief Method get_SystemInitializeOptions, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_SystemInitializeOptions() ;

/// @brief Method set_AllocateMemoryFunction, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_AllocateMemoryFunction(::System::IntPtr  value) ;

/// @brief Method set_OverrideThreadAffinity, addr 0x1804f66f0, size 0x30, virtual false, abstract: false, final false
inline void set_OverrideThreadAffinity(::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  value) ;

/// @brief Method set_ProductName, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ProductName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductVersion, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_ProductVersion(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ReallocateMemoryFunction, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_ReallocateMemoryFunction(::System::IntPtr  value) ;

/// @brief Method set_ReleaseMemoryFunction, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_ReleaseMemoryFunction(::System::IntPtr  value) ;

/// @brief Method set_Reserved, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved(::System::IntPtr  value) ;

/// @brief Method set_SystemInitializeOptions, addr 0x1803c8fa0, size 0x10, virtual false, abstract: false, final false
inline void set_SystemInitializeOptions(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InitializeOptions() ;

// Ctor Parameters [CppParam { name: "_AllocateMemoryFunction_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ReallocateMemoryFunction_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ReleaseMemoryFunction_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ProductName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ProductVersion_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_SystemInitializeOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_OverrideThreadAffinity_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>", modifiers: "", def_value: None }]
constexpr InitializeOptions(::System::IntPtr  _AllocateMemoryFunction_k__BackingField, ::System::IntPtr  _ReallocateMemoryFunction_k__BackingField, ::System::IntPtr  _ReleaseMemoryFunction_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductVersion_k__BackingField, ::System::IntPtr  _Reserved_k__BackingField, ::System::IntPtr  _SystemInitializeOptions_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  _OverrideThreadAffinity_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <AllocateMemoryFunction>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _AllocateMemoryFunction_k__BackingField;

/// @brief Field <ReallocateMemoryFunction>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _ReallocateMemoryFunction_k__BackingField;

/// @brief Field <ReleaseMemoryFunction>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  _ReleaseMemoryFunction_k__BackingField;

/// @brief Field <ProductName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductName_k__BackingField;

/// @brief Field <ProductVersion>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductVersion_k__BackingField;

/// @brief Field <Reserved>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  _Reserved_k__BackingField;

/// @brief Field <SystemInitializeOptions>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  _SystemInitializeOptions_k__BackingField;

/// @brief Field <OverrideThreadAffinity>k__BackingField, offset: 0x38, size: 0x50, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  _OverrideThreadAffinity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _AllocateMemoryFunction_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _ReallocateMemoryFunction_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _ReleaseMemoryFunction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _ProductName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _ProductVersion_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _Reserved_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _SystemInitializeOptions_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeOptions, _OverrideThreadAffinity_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::InitializeOptions) == 0x88, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
