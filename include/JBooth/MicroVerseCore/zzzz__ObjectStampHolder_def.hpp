#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectStampHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObjectStampHolder)
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ObjectStampHolder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ObjectStampHolder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectStampHolder*, "JBooth.MicroVerseCore", "ObjectStampHolder");
// Dependencies UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectStampHolder
class CORDL_TYPE ObjectStampHolder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field guid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::StringW  guid;

static inline ::JBooth::MicroVerseCore::ObjectStampHolder* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_guid() const;

constexpr ::StringW& __cordl_internal_get_guid() ;

constexpr void __cordl_internal_set_guid(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectStampHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectStampHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectStampHolder(ObjectStampHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectStampHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectStampHolder(ObjectStampHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17924};

/// @brief Field guid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___guid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectStampHolder, ___guid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectStampHolder) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
