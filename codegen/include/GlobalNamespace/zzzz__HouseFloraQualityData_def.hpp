#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseFloraQualityData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseFloraQualityData)
namespace GlobalNamespace {
struct HouseFloraQualityData_Entry;
}
namespace GlobalNamespace {
struct HouseFloraQualityData_Importance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct HouseFloraQualityData_Importance;
}
namespace GlobalNamespace {
class HouseFloraQualityData;
}
namespace GlobalNamespace {
struct HouseFloraQualityData_Entry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HouseFloraQualityData_Importance);
MARK_REF_T(::GlobalNamespace::HouseFloraQualityData*);
MARK_VAL_T(::GlobalNamespace::HouseFloraQualityData_Entry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseFloraQualityData_Importance, "", "HouseFloraQualityData/Importance");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseFloraQualityData*, "", "HouseFloraQualityData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseFloraQualityData_Entry, "", "HouseFloraQualityData/Entry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HouseFloraQualityData/Importance
struct CORDL_TYPE HouseFloraQualityData_Importance {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HouseFloraQualityData_Importance_Unwrapped
enum struct __HouseFloraQualityData_Importance_Unwrapped : int32_t {
__E_High = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_Low = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HouseFloraQualityData_Importance_Unwrapped () const noexcept {
return static_cast<__HouseFloraQualityData_Importance_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HouseFloraQualityData_Importance() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HouseFloraQualityData_Importance(int32_t  value__) noexcept;

/// @brief Field High value: I32(0)
static ::GlobalNamespace::HouseFloraQualityData_Importance const High;

/// @brief Field Low value: I32(2)
static ::GlobalNamespace::HouseFloraQualityData_Importance const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::HouseFloraQualityData_Importance const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseFloraQualityData_Importance, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseFloraQualityData_Importance) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies HouseFloraQualityData::Importance
namespace GlobalNamespace {
// Is value type: true
// CS Name: HouseFloraQualityData/Entry
struct CORDL_TYPE HouseFloraQualityData_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HouseFloraQualityData_Entry() ;

// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "importance", ty: "::GlobalNamespace::HouseFloraQualityData_Importance", modifiers: "", def_value: None }]
constexpr HouseFloraQualityData_Entry(::UnityW<::UnityEngine::GameObject>  prefab, ::GlobalNamespace::HouseFloraQualityData_Importance  importance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field prefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field importance, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::HouseFloraQualityData_Importance  importance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseFloraQualityData_Entry, prefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseFloraQualityData_Entry, importance) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseFloraQualityData_Entry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies HouseFloraQualityData::Importance, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseFloraQualityData
class CORDL_TYPE HouseFloraQualityData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Entry = ::GlobalNamespace::HouseFloraQualityData_Entry;

using Importance = ::GlobalNamespace::HouseFloraQualityData_Importance;

/// @brief Field _minimumImportanceLastSet, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__minimumImportanceLastSet, put=__cordl_internal_set__minimumImportanceLastSet)) ::GlobalNamespace::HouseFloraQualityData_Importance  _minimumImportanceLastSet;

/// @brief Field allFloraMaterials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_allFloraMaterials, put=__cordl_internal_set_allFloraMaterials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allFloraMaterials;

/// @brief Field entries, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>*  entries;

/// @brief Method IsPrototypeRendered, addr 0x180421b90, size 0x120, virtual false, abstract: false, final false
inline bool IsPrototypeRendered(::UnityEngine::GameObject*  prototype) ;

static inline ::GlobalNamespace::HouseFloraQualityData* New_ctor() ;

/// @brief Method Set, addr 0x180421cb0, size 0xd0, virtual false, abstract: false, final false
inline void Set(::GlobalNamespace::HouseFloraQualityData_Importance  minimumImportance) ;

constexpr ::GlobalNamespace::HouseFloraQualityData_Importance const& __cordl_internal_get__minimumImportanceLastSet() const;

constexpr ::GlobalNamespace::HouseFloraQualityData_Importance& __cordl_internal_get__minimumImportanceLastSet() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_allFloraMaterials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_allFloraMaterials() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>*& __cordl_internal_get_entries() ;

constexpr void __cordl_internal_set__minimumImportanceLastSet(::GlobalNamespace::HouseFloraQualityData_Importance  value) ;

constexpr void __cordl_internal_set_allFloraMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>*  value) ;

/// @brief Method .ctor, addr 0x180421d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseFloraQualityData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseFloraQualityData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseFloraQualityData(HouseFloraQualityData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseFloraQualityData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseFloraQualityData(HouseFloraQualityData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5183};

/// @brief Field _minimumImportanceLastSet, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::HouseFloraQualityData_Importance  ____minimumImportanceLastSet;

/// @brief Field entries, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>*  ___entries;

/// @brief Field allFloraMaterials, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___allFloraMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseFloraQualityData, ____minimumImportanceLastSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseFloraQualityData, ___entries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseFloraQualityData, ___allFloraMaterials) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseFloraQualityData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
