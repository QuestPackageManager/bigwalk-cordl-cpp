#pragma once
// IWYU pragma private; include "GlobalNamespace/JaggedArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JaggedArray)
// Forward declare root types
namespace GlobalNamespace {
class JaggedArray;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JaggedArray*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JaggedArray*, "", "JaggedArray");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: JaggedArray
class CORDL_TYPE JaggedArray : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _currentIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentIndex, put=__cordl_internal_set__currentIndex)) int32_t  _currentIndex;

/// @brief Field _dataArray, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataArray, put=__cordl_internal_set__dataArray)) ::ArrayW<int32_t>  _dataArray;

/// @brief Field _indexArray, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__indexArray, put=__cordl_internal_set__indexArray)) ::ArrayW<int32_t>  _indexArray;

/// @brief Method AddArray, addr 0x180482920, size 0x90, virtual false, abstract: false, final false
inline void AddArray(::ArrayW<int32_t>  array, int32_t  arrayIndex) ;

/// @brief Method GetElement, addr 0x1804829b0, size 0x50, virtual false, abstract: false, final false
inline int32_t GetElement(int32_t  arrayIndex, int32_t  elementIndex) ;

static inline ::GlobalNamespace::JaggedArray* New_ctor(int32_t  totalSize, int32_t  numberOfArrays) ;

constexpr int32_t const& __cordl_internal_get__currentIndex() const;

constexpr int32_t& __cordl_internal_get__currentIndex() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__dataArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__dataArray() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__indexArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__indexArray() ;

constexpr void __cordl_internal_set__currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set__dataArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__indexArray(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x180482a00, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  totalSize, int32_t  numberOfArrays) ;

/// @brief Method get_Count, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JaggedArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JaggedArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JaggedArray(JaggedArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JaggedArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JaggedArray(JaggedArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17510};

/// @brief Field _dataArray, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____dataArray;

/// @brief Field _indexArray, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____indexArray;

/// @brief Field _currentIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ____currentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JaggedArray, ____dataArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JaggedArray, ____indexArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JaggedArray, ____currentIndex) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JaggedArray) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
