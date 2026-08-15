#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceInContainer)
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
namespace MA::Flora {
class FloraInstanceContainer;
}
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
struct InstanceInContainer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceInContainer);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceInContainer, "MA.Flora", "InstanceInContainer");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceInContainer
struct CORDL_TYPE InstanceInContainer {
public:
// Declarations
 __declspec(property(get=get_Container)) ::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>  Container;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInContainer>"
constexpr operator  ::System::IComparable_1<::MA::Flora::InstanceInContainer>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInContainer>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::InstanceInContainer>*() ;

/// @brief Method CompareTo, addr 0x18147c780, size 0x50, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::InstanceInContainer  other) ;

/// @brief Method Equals, addr 0x18147c7d0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::InstanceInContainer  other) ;

/// @brief Method GetHashCode, addr 0x18147c820, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181482230, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Container, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>> get_Container() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::InstanceInContainer get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInContainer>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInContainer>* i___System__IComparable_1___MA__Flora__InstanceInContainer_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInContainer>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInContainer>* i___System__IEquatable_1___MA__Flora__InstanceInContainer_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceInContainer() ;

// Ctor Parameters [CppParam { name: "ContainerEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "IndexInContainer", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceInContainer(::UnityEngine::EntityId  ContainerEntity, int32_t  IndexInContainer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field ContainerEntity, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  ContainerEntity;

/// @brief Field IndexInContainer, offset: 0x4, size: 0x4, def value: None
 int32_t  IndexInContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceInContainer, ContainerEntity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceInContainer, IndexInContainer) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceInContainer) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
