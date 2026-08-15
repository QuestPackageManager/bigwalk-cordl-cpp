#pragma once
// IWYU pragma private; include "Shipmates/Utils/ShipmatesEventDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShipmatesEventDispatcher)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Delegate;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Shipmates::Utils {
class ShipmatesEventDispatcher;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::ShipmatesEventDispatcher*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::ShipmatesEventDispatcher*, "Shipmates.Utils", "ShipmatesEventDispatcher");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.ShipmatesEventDispatcher
class CORDL_TYPE ShipmatesEventDispatcher : public ::System::Object {
public:
// Declarations
/// @brief Field eventTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eventTable, put=setStaticF_eventTable)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  eventTable;

/// @brief Method AddListener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AddListener(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  listener) ;

/// @brief Method Dispatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask Dispatch(T  eventArgs) ;

/// @brief Method IsRegistered, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsRegistered(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  listener) ;

/// @brief Method RemoveListener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveListener(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  listener) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>* getStaticF_eventTable() ;

static inline void setStaticF_eventTable(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShipmatesEventDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShipmatesEventDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShipmatesEventDispatcher(ShipmatesEventDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShipmatesEventDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShipmatesEventDispatcher(ShipmatesEventDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::Utils::ShipmatesEventDispatcher) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::Utils
