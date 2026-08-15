#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBufferHeader)
namespace MA::Flora {
struct NativeBufferHeader_TrashMode;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace MA::Flora {
struct NativeBufferHeader_TrashMode;
}
namespace MA::Flora {
struct NativeBufferHeader;
}
// Write type traits
MARK_VAL_T(::MA::Flora::NativeBufferHeader_TrashMode);
MARK_VAL_T(::MA::Flora::NativeBufferHeader);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBufferHeader_TrashMode, "MA.Flora", "NativeBufferHeader/TrashMode");
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBufferHeader, "MA.Flora", "NativeBufferHeader");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBufferHeader/TrashMode
struct CORDL_TYPE NativeBufferHeader_TrashMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NativeBufferHeader_TrashMode_Unwrapped
enum struct __NativeBufferHeader_TrashMode_Unwrapped : int32_t {
__E_TrashOldData = static_cast<int32_t>(0x0),
__E_RetainOldData = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeBufferHeader_TrashMode_Unwrapped () const noexcept {
return static_cast<__NativeBufferHeader_TrashMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NativeBufferHeader_TrashMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeBufferHeader_TrashMode(int32_t  value__) noexcept;

/// @brief Field RetainOldData value: I32(1)
static ::MA::Flora::NativeBufferHeader_TrashMode const RetainOldData;

/// @brief Field TrashOldData value: I32(0)
static ::MA::Flora::NativeBufferHeader_TrashMode const TrashOldData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeBufferHeader_TrashMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeBufferHeader_TrashMode) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBufferHeader
struct CORDL_TYPE NativeBufferHeader {
public:
// Declarations
using TrashMode = ::MA::Flora::NativeBufferHeader_TrashMode;

/// @brief Field Capacity, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_Capacity, put=__cordl_internal_set_Capacity)) int32_t  Capacity;

/// @brief Field Length, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Length, put=__cordl_internal_set_Length)) int32_t  Length;

/// @brief Field Pointer, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointer, put=__cordl_internal_set_Pointer)) uint8_t*  Pointer;

/// @brief Method Destroy, addr 0x181460540, size 0x40, virtual false, abstract: false, final false
static inline void Destroy(::MA::Flora::NativeBufferHeader*  header, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method EnsureCapacity, addr 0x181460580, size 0x110, virtual false, abstract: false, final false
static inline void EnsureCapacity(::MA::Flora::NativeBufferHeader*  header, int32_t  newCapacity, int32_t  typeSize, int32_t  alignment, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method GetElementPointer, addr 0x181460690, size 0x30, virtual false, abstract: false, final false
static inline uint8_t* GetElementPointer(::MA::Flora::NativeBufferHeader*  header) ;

/// @brief Method Initialize, addr 0x1814606c0, size 0x20, virtual false, abstract: false, final false
static inline void Initialize(::MA::Flora::NativeBufferHeader*  header, int32_t  bufferCapacity) ;

/// @brief Method SetCapacity, addr 0x1814606e0, size 0xf0, virtual false, abstract: false, final false
static inline void SetCapacity(::MA::Flora::NativeBufferHeader*  header, int32_t  newCapacity, int32_t  typeSize, int32_t  alignment, int32_t  internalCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

constexpr int32_t const& __cordl_internal_get_Capacity() const;

constexpr int32_t& __cordl_internal_get_Capacity() ;

constexpr int32_t const& __cordl_internal_get_Length() const;

constexpr int32_t& __cordl_internal_get_Length() ;

constexpr uint8_t* const& __cordl_internal_get_Pointer() const;

constexpr uint8_t*& __cordl_internal_get_Pointer() ;

constexpr void __cordl_internal_set_Capacity(int32_t  value) ;

constexpr void __cordl_internal_set_Length(int32_t  value) ;

constexpr void __cordl_internal_set_Pointer(uint8_t*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBufferHeader() ;

// Ctor Parameters [CppParam { name: "Pointer", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeBufferHeader(uint8_t*  Pointer, int32_t  Length, int32_t  Capacity) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Pointer_padding[0x0];
/// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
 uint8_t*  ___Pointer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Pointer_padding_forAlignment[0x0];
/// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
 uint8_t*  ___Pointer_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Length_padding[0x8];
/// @brief Field Length, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Length;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Length_padding_forAlignment[0x8];
/// @brief Field Length, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Length_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___Capacity_padding[0xc];
/// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  ___Capacity;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___Capacity_padding_forAlignment[0xc];
/// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  ___Capacity_forAlignment;
};
};
public:

/// @brief Field MinimumCapacity offset 0xffffffff size 0x4
static constexpr int32_t  MinimumCapacity{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::NativeBufferHeader) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
