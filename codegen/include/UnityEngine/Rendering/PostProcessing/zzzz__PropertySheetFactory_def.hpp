#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PropertySheetFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PropertySheetFactory)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheetFactory;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*, "UnityEngine.Rendering.PostProcessing", "PropertySheetFactory");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PropertySheetFactory
class CORDL_TYPE PropertySheetFactory : public ::System::Object {
public:
// Declarations
/// @brief Field m_Sheets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Sheets, put=__cordl_internal_set_m_Sheets)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>*  m_Sheets;

/// @brief Method Get, addr 0x181fcb600, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* Get(::UnityEngine::Shader*  shader) ;

/// @brief Method Get, addr 0x181fcb790, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* Get(::StringW  shaderName) ;

static inline ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* New_ctor() ;

/// @brief Method Release, addr 0x181fcb810, size 0xe0, virtual false, abstract: false, final false
inline void Release() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>* const& __cordl_internal_get_m_Sheets() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>*& __cordl_internal_get_m_Sheets() ;

constexpr void __cordl_internal_set_m_Sheets(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>*  value) ;

/// @brief Method .ctor, addr 0x181fcb8f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertySheetFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertySheetFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertySheetFactory(PropertySheetFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertySheetFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertySheetFactory(PropertySheetFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18659};

/// @brief Field m_Sheets, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>*  ___m_Sheets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory, ___m_Sheets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
