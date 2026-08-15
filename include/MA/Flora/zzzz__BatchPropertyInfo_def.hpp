#pragma once
// IWYU pragma private; include "MA/Flora/BatchPropertyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchPropertyInfo)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace MA::Flora {
struct BatchPropertyInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchPropertyInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchPropertyInfo, "MA.Flora", "BatchPropertyInfo");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchPropertyInfo
struct CORDL_TYPE BatchPropertyInfo {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::BatchPropertyInfo>"
constexpr operator  ::System::IComparable_1<::MA::Flora::BatchPropertyInfo>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>*() ;

/// @brief Method CompareTo, addr 0x181458e70, size 0x40, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::BatchPropertyInfo  other) ;

/// @brief Method Equals, addr 0x181458eb0, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::BatchPropertyInfo  other) ;

/// @brief Method GetHashCode, addr 0x181458f10, size 0x70, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x181458f80, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  nameID, int32_t  typeSizeInBytes, bool  isOverriden, bool  isPerInstance) ;

/// @brief Method get_IsCreated, addr 0x181458fb0, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::BatchPropertyInfo>"
constexpr ::System::IComparable_1<::MA::Flora::BatchPropertyInfo>* i___System__IComparable_1___MA__Flora__BatchPropertyInfo_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>* i___System__IEquatable_1___MA__Flora__BatchPropertyInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr BatchPropertyInfo() ;

// Ctor Parameters [CppParam { name: "NameID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TypeSizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IsOverriden", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsPerInstance", ty: "bool", modifiers: "", def_value: None }]
constexpr BatchPropertyInfo(int32_t  NameID, int32_t  TypeSizeInBytes, bool  IsOverriden, bool  IsPerInstance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field NameID, offset: 0x0, size: 0x4, def value: None
 int32_t  NameID;

/// @brief Field TypeSizeInBytes, offset: 0x4, size: 0x4, def value: None
 int32_t  TypeSizeInBytes;

/// @brief Field IsOverriden, offset: 0x8, size: 0x1, def value: None
 bool  IsOverriden;

/// @brief Field IsPerInstance, offset: 0x9, size: 0x1, def value: None
 bool  IsPerInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchPropertyInfo, NameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchPropertyInfo, TypeSizeInBytes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchPropertyInfo, IsOverriden) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchPropertyInfo, IsPerInstance) == 0x9, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchPropertyInfo) == 0xc, "Size mismatch!");

} // namespace end def MA::Flora
