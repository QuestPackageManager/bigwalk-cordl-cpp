#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Handle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Handle)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices {
class Handle;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Handle*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Handle*, "Epic.OnlineServices", "Handle");
// Dependencies System.IntPtr, System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Handle
class CORDL_TYPE Handle : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_InnerHandle, put=set_InnerHandle)) ::System::IntPtr  InnerHandle;

/// @brief Field <InnerHandle>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__InnerHandle_k__BackingField, put=__cordl_internal_set__InnerHandle_k__BackingField)) ::System::IntPtr  _InnerHandle_k__BackingField;

/// @brief Convert operator to "::System::IEquatable_1<::Epic::OnlineServices::Handle*>"
constexpr operator  ::System::IEquatable_1<::Epic::OnlineServices::Handle*>*() noexcept;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() noexcept;

/// @brief Method Equals, addr 0x1804d8ff0, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1804d90a0, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::Epic::OnlineServices::Handle*  other) ;

/// @brief Method GetHashCode, addr 0x1804d9120, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Epic::OnlineServices::Handle* New_ctor() ;

static inline ::Epic::OnlineServices::Handle* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method ToString, addr 0x1804d9150, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1804d9170, size 0x30, virtual true, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

constexpr ::System::IntPtr const& __cordl_internal_get__InnerHandle_k__BackingField() const;

constexpr ::System::IntPtr& __cordl_internal_get__InnerHandle_k__BackingField() ;

constexpr void __cordl_internal_set__InnerHandle_k__BackingField(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

/// @brief Method get_InnerHandle, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_InnerHandle() ;

/// @brief Convert to "::System::IEquatable_1<::Epic::OnlineServices::Handle*>"
constexpr ::System::IEquatable_1<::Epic::OnlineServices::Handle*>* i___System__IEquatable_1___Epic__OnlineServices__Handle__() noexcept;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() noexcept;

/// @brief Method op_Equality, addr 0x1804d91a0, size 0x90, virtual false, abstract: false, final false
static inline bool op_Equality(::Epic::OnlineServices::Handle*  left, ::Epic::OnlineServices::Handle*  right) ;

/// @brief Method op_Inequality, addr 0x1804d9230, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Inequality(::Epic::OnlineServices::Handle*  left, ::Epic::OnlineServices::Handle*  right) ;

/// @brief Method set_InnerHandle, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_InnerHandle(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Handle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Handle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Handle(Handle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Handle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Handle(Handle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7431};

/// @brief Field <InnerHandle>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ____InnerHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Handle, ____InnerHandle_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Handle) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices
