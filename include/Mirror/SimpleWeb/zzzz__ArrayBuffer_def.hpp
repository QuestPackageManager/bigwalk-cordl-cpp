#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ArrayBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayBuffer)
namespace Mirror::SimpleWeb {
class IBufferOwner;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ArrayBuffer*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ArrayBuffer*, "Mirror.SimpleWeb", "ArrayBuffer");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ArrayBuffer
class CORDL_TYPE ArrayBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field <count>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__count_k__BackingField, put=__cordl_internal_set__count_k__BackingField)) int32_t  _count_k__BackingField;

/// @brief Field array, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::ArrayW<uint8_t>  array;

 __declspec(property(get=get_count, put=set_count)) int32_t  count;

/// @brief Field owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::Mirror::SimpleWeb::IBufferOwner*  owner;

/// @brief Field releasesRequired, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_releasesRequired, put=__cordl_internal_set_releasesRequired)) int32_t  releasesRequired;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CopyFrom, addr 0x181acf540, size 0x60, virtual false, abstract: false, final false
inline void CopyFrom(::System::IntPtr  bufferPtr, int32_t  length) ;

/// @brief Method CopyFrom, addr 0x181acf480, size 0x60, virtual false, abstract: false, final false
inline void CopyFrom(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method CopyFrom, addr 0x181acf4e0, size 0x60, virtual false, abstract: false, final false
inline void CopyFrom(::ArrayW<uint8_t>  source, int32_t  offset, int32_t  length) ;

/// @brief Method CopyTo, addr 0x181acf5a0, size 0x60, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<uint8_t>  target, int32_t  offset) ;

/// @brief Method Dispose, addr 0x181acf600, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Mirror::SimpleWeb::ArrayBuffer* New_ctor(::Mirror::SimpleWeb::IBufferOwner*  owner, int32_t  size) ;

/// @brief Method Release, addr 0x181acf610, size 0xb0, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetReleasesRequired, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void SetReleasesRequired(int32_t  required) ;

/// @brief Method ToSegment, addr 0x181acf6c0, size 0x40, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> ToSegment() ;

/// @brief Method Validate, addr 0x181acf700, size 0x20, virtual false, abstract: false, final false
inline void Validate(int32_t  arraySize) ;

constexpr int32_t const& __cordl_internal_get__count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__count_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_array() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_array() ;

constexpr ::Mirror::SimpleWeb::IBufferOwner* const& __cordl_internal_get_owner() const;

constexpr ::Mirror::SimpleWeb::IBufferOwner*& __cordl_internal_get_owner() ;

constexpr int32_t const& __cordl_internal_get_releasesRequired() const;

constexpr int32_t& __cordl_internal_get_releasesRequired() ;

constexpr void __cordl_internal_set__count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_array(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_owner(::Mirror::SimpleWeb::IBufferOwner*  value) ;

constexpr void __cordl_internal_set_releasesRequired(int32_t  value) ;

/// @brief Method .ctor, addr 0x181acf720, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::IBufferOwner*  owner, int32_t  size) ;

/// @brief Method get_count, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_count, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayBuffer(ArrayBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayBuffer(ArrayBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20519};

/// @brief Field owner, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SimpleWeb::IBufferOwner*  ___owner;

/// @brief Field array, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___array;

/// @brief Field <count>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____count_k__BackingField;

/// @brief Field releasesRequired, offset: 0x24, size: 0x4, def value: None
 int32_t  ___releasesRequired;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::ArrayBuffer, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ArrayBuffer, ___array) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ArrayBuffer, ____count_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ArrayBuffer, ___releasesRequired) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::ArrayBuffer) == 0x28, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
