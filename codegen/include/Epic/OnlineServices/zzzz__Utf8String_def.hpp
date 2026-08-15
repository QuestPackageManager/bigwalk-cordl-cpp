#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Utf8String.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8String)
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices {
class Utf8String;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Utf8String*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Utf8String*, "Epic.OnlineServices", "Utf8String");
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Utf8String
class CORDL_TYPE Utf8String : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bytes, put=set_Bytes)) ::ArrayW<uint8_t>  Bytes;

/// @brief Field EmptyString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyString, put=setStaticF_EmptyString)) ::Epic::OnlineServices::Utf8String*  EmptyString;

 __declspec(property(get=get_Item, put=set_Item)) uint8_t  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

 __declspec(property(get=get_Utf16, put=set_Utf16)) ::StringW  Utf16;

/// @brief Field <Bytes>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Bytes_k__BackingField, put=__cordl_internal_set__Bytes_k__BackingField)) ::ArrayW<uint8_t>  _Bytes_k__BackingField;

/// @brief Field <Length>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

/// @brief Method Equals, addr 0x1804e5d50, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x1804e5dd0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Epic::OnlineServices::Utf8String* New_ctor() ;

static inline ::Epic::OnlineServices::Utf8String* New_ctor(::ArrayW<uint8_t>  bytes) ;

static inline ::Epic::OnlineServices::Utf8String* New_ctor(::StringW  value) ;

/// @brief Method ToString, addr 0x1804e5e10, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__Bytes_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__Bytes_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr void __cordl_internal_set__Bytes_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x1804e5f00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804e5fe0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  bytes) ;

/// @brief Method .ctor, addr 0x1804e5f10, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_EmptyString() ;

/// @brief Method get_Bytes, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Bytes() ;

/// @brief Method get_Item, addr 0x1804e6060, size 0x30, virtual false, abstract: false, final false
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Utf16, addr 0x1804e5e10, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_Utf16() ;

/// @brief Method op_Addition, addr 0x1804e6090, size 0x110, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* op_Addition(::Epic::OnlineServices::Utf8String*  left, ::Epic::OnlineServices::Utf8String*  right) ;

/// @brief Method op_Equality, addr 0x1804e61a0, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::Epic::OnlineServices::Utf8String*  left, ::Epic::OnlineServices::Utf8String*  right) ;

/// @brief Method op_Explicit, addr 0x1804e61c0, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> op_Explicit___ArrayW_uint8_t_(::Epic::OnlineServices::Utf8String*  other) ;

/// @brief Method op_Explicit, addr 0x1804e6200, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* op_Explicit___Epic__OnlineServices__Utf8String_(::ArrayW<uint8_t>  other) ;

/// @brief Method op_Implicit, addr 0x1804e62e0, size 0xe0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* op_Implicit___Epic__OnlineServices__Utf8String_(::StringW  other) ;

/// @brief Method op_Implicit, addr 0x1804e6290, size 0x50, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Epic::OnlineServices::Utf8String*  other) ;

/// @brief Method op_Inequality, addr 0x1804e63c0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::Epic::OnlineServices::Utf8String*  left, ::Epic::OnlineServices::Utf8String*  right) ;

static inline void setStaticF_EmptyString(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Bytes, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Bytes(::ArrayW<uint8_t>  value) ;

/// @brief Method set_Item, addr 0x1804e6400, size 0x20, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint8_t  value) ;

/// @brief Method set_Length, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

/// @brief Method set_Utf16, addr 0x1804e5f10, size 0xd0, virtual false, abstract: false, final false
inline void set_Utf16(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8String() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8String", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8String(Utf8String && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8String", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8String(Utf8String const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7443};

/// @brief Field <Length>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

/// @brief Field <Bytes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____Bytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Utf8String, ____Length_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Utf8String, ____Bytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Utf8String) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices
