#pragma once
// IWYU pragma private; include "Animancer/MixerTransition2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerTransition_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MixerTransition2D)
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace Animancer {
class ManualMixerState_ITransition2D;
}
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
namespace Animancer {
struct MixerTransition2D_MixerType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
struct MixerTransition2D_MixerType;
}
namespace Animancer {
class MixerTransition2D;
}
// Write type traits
MARK_VAL_T(::Animancer::MixerTransition2D_MixerType);
MARK_REF_T(::Animancer::MixerTransition2D*);
DEFINE_IL2CPP_CLASS(::Animancer::MixerTransition2D_MixerType, "Animancer", "MixerTransition2D/MixerType");
DEFINE_IL2CPP_CLASS(::Animancer::MixerTransition2D*, "Animancer", "MixerTransition2D");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.MixerTransition2D/MixerType
struct CORDL_TYPE MixerTransition2D_MixerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MixerTransition2D_MixerType_Unwrapped
enum struct __MixerTransition2D_MixerType_Unwrapped : int32_t {
__E_Cartesian = static_cast<int32_t>(0x0),
__E_Directional = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MixerTransition2D_MixerType_Unwrapped () const noexcept {
return static_cast<__MixerTransition2D_MixerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MixerTransition2D_MixerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MixerTransition2D_MixerType(int32_t  value__) noexcept;

/// @brief Field Cartesian value: I32(0)
static ::Animancer::MixerTransition2D_MixerType const Cartesian;

/// @brief Field Directional value: I32(1)
static ::Animancer::MixerTransition2D_MixerType const Directional;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18236};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::MixerTransition2D_MixerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::MixerTransition2D_MixerType) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.MixerTransition2D::MixerType, Animancer.MixerTransition`2<TMixer, TParameter>, UnityEngine.Vector2
namespace Animancer {
// Is value type: false
// CS Name: Animancer.MixerTransition2D
class CORDL_TYPE MixerTransition2D : public ::Animancer::MixerTransition_2<::Animancer::MixerState_1<::UnityEngine::Vector2>*,::UnityEngine::Vector2> {
public:
// Declarations
using MixerType = ::Animancer::MixerTransition2D_MixerType;

 __declspec(property(get=get_Type)) ::Animancer::MixerTransition2D_MixerType  Type;

/// @brief Field _Type, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type, put=__cordl_internal_set__Type)) ::Animancer::MixerTransition2D_MixerType  _Type;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*() noexcept;

/// @brief Convert operator to "::Animancer::ManualMixerState_ITransition2D"
constexpr operator  ::Animancer::ManualMixerState_ITransition2D*() noexcept;

/// @brief Method CopyFrom, addr 0x180311ba0, size 0x50, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::MixerTransition2D*  copyFrom) ;

/// @brief Method CreateState, addr 0x180311bf0, size 0xa0, virtual true, abstract: false, final false
inline ::Animancer::MixerState_1<::UnityEngine::Vector2>* CreateState() ;

static inline ::Animancer::MixerTransition2D* New_ctor() ;

constexpr ::Animancer::MixerTransition2D_MixerType const& __cordl_internal_get__Type() const;

constexpr ::Animancer::MixerTransition2D_MixerType& __cordl_internal_get__Type() ;

constexpr void __cordl_internal_set__Type(::Animancer::MixerTransition2D_MixerType  value) ;

/// @brief Method .ctor, addr 0x180311c90, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Type, addr 0x18030dd50, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Animancer::MixerTransition2D_MixerType> get_Type() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>"
constexpr ::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>* i___Animancer__ICopyable_1___Animancer__MixerTransition2D__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>* i___Animancer__ITransition_1___Animancer__MixerState_1___UnityEngine__Vector2___() noexcept;

/// @brief Convert to "::Animancer::ManualMixerState_ITransition2D"
constexpr ::Animancer::ManualMixerState_ITransition2D* i___Animancer__ManualMixerState_ITransition2D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerTransition2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerTransition2D(MixerTransition2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerTransition2D(MixerTransition2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18237};

/// @brief Field _Type, offset: 0x68, size: 0x4, def value: None
 ::Animancer::MixerTransition2D_MixerType  ____Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::MixerTransition2D, ____Type) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Animancer::MixerTransition2D) == 0x70, "Size mismatch!");

} // namespace end def Animancer
