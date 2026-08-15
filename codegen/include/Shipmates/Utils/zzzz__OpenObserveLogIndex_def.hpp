#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveLogIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenObserveLogIndex)
// Forward declare root types
namespace Shipmates::Utils {
class OpenObserveLogIndex;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::OpenObserveLogIndex*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveLogIndex*, "Shipmates.Utils", "OpenObserveLogIndex");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.OpenObserveLogIndex
class CORDL_TYPE OpenObserveLogIndex : public ::System::Object {
public:
// Declarations
/// @brief Field _index, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) ::StringW  _index;

static inline ::Shipmates::Utils::OpenObserveLogIndex* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__index() const;

constexpr ::StringW& __cordl_internal_get__index() ;

constexpr void __cordl_internal_set__index(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveLogIndex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveLogIndex", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenObserveLogIndex(OpenObserveLogIndex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveLogIndex", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenObserveLogIndex(OpenObserveLogIndex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21067};

/// @brief Field _index, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveLogIndex, ____index) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveLogIndex) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::Utils
