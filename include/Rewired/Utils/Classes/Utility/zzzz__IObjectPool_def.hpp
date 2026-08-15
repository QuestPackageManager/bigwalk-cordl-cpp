#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/IObjectPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObjectPool)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class IObjectPool;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::IObjectPool*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::IObjectPool*, "Rewired.Utils.Classes.Utility", "IObjectPool");
// Dependencies 
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.IObjectPool
class CORDL_TYPE IObjectPool {
public:
// Declarations
/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear(bool  reduceSize) ;

/// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Get() ;

/// @brief Method Return, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Return(::System::Object*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "IObjectPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IObjectPool(IObjectPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
