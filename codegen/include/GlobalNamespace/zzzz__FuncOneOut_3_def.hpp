#pragma once
// IWYU pragma private; include "GlobalNamespace/FuncOneOut_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(FuncOneOut_3)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::FuncOneOut_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::FuncOneOut_3, "", "FuncOneOut`3");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename T,typename U,typename V>
// Is value type: false
// CS Name: FuncOneOut`3<T,U,V>
class CORDL_TYPE FuncOneOut_3 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  input, ::by_ref<U>  output, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline V EndInvoke(::by_ref<U>  output, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline V Invoke(T  input, ::by_ref<U>  output) ;

static inline ::GlobalNamespace::FuncOneOut_3<T,U,V>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FuncOneOut_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FuncOneOut_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FuncOneOut_3(FuncOneOut_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FuncOneOut_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FuncOneOut_3(FuncOneOut_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17502};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
