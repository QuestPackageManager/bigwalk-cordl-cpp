#pragma once
// IWYU pragma private; include "Rewired/InputMapCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputCategory_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputMapCategory)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace Rewired {
class InputMapCategory;
}
// Write type traits
MARK_REF_T(::Rewired::InputMapCategory*);
DEFINE_IL2CPP_CLASS(::Rewired::InputMapCategory*, "Rewired", "InputMapCategory");
// Dependencies Rewired.InputCategory
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapCategory
class CORDL_TYPE InputMapCategory : public ::Rewired::InputCategory {
public:
// Declarations
 __declspec(property(get=ZYvMUCjJwNufeazgZNQhLoGYrluA)) ::System::Collections::Generic::List_1<int32_t>*  ZWZMQJNrGsatbwmaJIUFXbaigSeD;

/// @brief Field _checkConflictsCategoryIds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__checkConflictsCategoryIds, put=__cordl_internal_set__checkConflictsCategoryIds)) ::System::Collections::Generic::List_1<int32_t>*  _checkConflictsCategoryIds;

/// @brief Field _checkConflictsCategoryIds_readOnly, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__checkConflictsCategoryIds_readOnly, put=__cordl_internal_set__checkConflictsCategoryIds_readOnly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*  _checkConflictsCategoryIds_readOnly;

/// @brief Field _checkConflictsWithAllCategories, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__checkConflictsWithAllCategories, put=__cordl_internal_set__checkConflictsWithAllCategories)) bool  _checkConflictsWithAllCategories;

 __declspec(property(get=get_checkConflictsCategoryIds)) ::System::Collections::Generic::IList_1<int32_t>*  checkConflictsCategoryIds;

 __declspec(property(get=get_checkConflictsWithAllCategories, put=UZPphjeihIZAVTXHDdScxYotsORA)) bool  checkConflictsWithAllCategories;

 __declspec(property(get=get_keyCategory)) ::StringW  keyCategory;

static inline ::Rewired::InputMapCategory* New_ctor() ;

static inline ::Rewired::InputMapCategory* New_ctor(::Rewired::InputMapCategory*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method UZPphjeihIZAVTXHDdScxYotsORA, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void UZPphjeihIZAVTXHDdScxYotsORA(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZYvMUCjJwNufeazgZNQhLoGYrluA, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* ZYvMUCjJwNufeazgZNQhLoGYrluA() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__checkConflictsCategoryIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__checkConflictsCategoryIds() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* const& __cordl_internal_get__checkConflictsCategoryIds_readOnly() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*& __cordl_internal_get__checkConflictsCategoryIds_readOnly() ;

constexpr bool const& __cordl_internal_get__checkConflictsWithAllCategories() const;

constexpr bool& __cordl_internal_get__checkConflictsWithAllCategories() ;

constexpr void __cordl_internal_set__checkConflictsCategoryIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__checkConflictsCategoryIds_readOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__checkConflictsWithAllCategories(bool  value) ;

/// @brief Method .ctor, addr 0x1819a57b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a57f0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapCategory*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_checkConflictsCategoryIds, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<int32_t>* get_checkConflictsCategoryIds() ;

/// @brief Method get_checkConflictsWithAllCategories, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_checkConflictsWithAllCategories() ;

/// @brief Method get_keyCategory, addr 0x1819a58a0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_keyCategory() ;

/// @brief Method qvUEKwDqoxSbfrUorMGxctTHagJRb, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void qvUEKwDqoxSbfrUorMGxctTHagJRb() ;

/// @brief Method rrJPWxgIHKNivAQIohFAcTgOapCAA, addr 0x1819a58b0, size 0x80, virtual true, abstract: false, final false
inline void rrJPWxgIHKNivAQIohFAcTgOapCAA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapCategory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapCategory(InputMapCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapCategory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapCategory(InputMapCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2078};

/// @brief Field _checkConflictsWithAllCategories, offset: 0x44, size: 0x1, def value: None
 bool  ____checkConflictsWithAllCategories;

/// @brief Field _checkConflictsCategoryIds, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____checkConflictsCategoryIds;

/// @brief Field _checkConflictsCategoryIds_readOnly, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*  ____checkConflictsCategoryIds_readOnly;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapCategory, ____checkConflictsWithAllCategories) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapCategory, ____checkConflictsCategoryIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapCategory, ____checkConflictsCategoryIds_readOnly) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapCategory) == 0x60, "Size mismatch!");

} // namespace end def Rewired
