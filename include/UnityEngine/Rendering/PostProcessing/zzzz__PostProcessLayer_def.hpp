#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessLayer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering::PostProcessing {
class Dithering;
}
namespace UnityEngine::Rendering::PostProcessing {
class FastApproximateAntialiasing;
}
namespace UnityEngine::Rendering::PostProcessing {
class Fog;
}
namespace UnityEngine::Rendering::PostProcessing {
class LogHistogram;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessBundle;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessDebugLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectRenderer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessEvent;
}
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessLayer_Antialiasing;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer_SerializedBundleRef;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_0;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_2;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_3;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheetFactory;
}
namespace UnityEngine::Rendering::PostProcessing {
class SubpixelMorphologicalAntialiasing;
}
namespace UnityEngine::Rendering::PostProcessing {
class TargetPool;
}
namespace UnityEngine::Rendering::PostProcessing {
class TemporalAntialiasing;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessLayer_Antialiasing;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer_SerializedBundleRef;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_0;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_2;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer___c__DisplayClass54_3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/Antialiasing");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/SerializedBundleRef");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/<>c__DisplayClass54_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/<>c__DisplayClass54_1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/<>c__DisplayClass54_2");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*, "UnityEngine.Rendering.PostProcessing", "PostProcessLayer/<>c__DisplayClass54_3");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing
struct CORDL_TYPE PostProcessLayer_Antialiasing {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PostProcessLayer_Antialiasing_Unwrapped
enum struct __PostProcessLayer_Antialiasing_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FastApproximateAntialiasing = static_cast<int32_t>(0x1),
__E_SubpixelMorphologicalAntialiasing = static_cast<int32_t>(0x2),
__E_TemporalAntialiasing = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PostProcessLayer_Antialiasing_Unwrapped () const noexcept {
return static_cast<__PostProcessLayer_Antialiasing_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer_Antialiasing() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PostProcessLayer_Antialiasing(int32_t  value__) noexcept;

/// @brief Field FastApproximateAntialiasing value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const FastApproximateAntialiasing;

/// @brief Field None value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const None;

/// @brief Field SubpixelMorphologicalAntialiasing value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const SubpixelMorphologicalAntialiasing;

/// @brief Field TemporalAntialiasing value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const TemporalAntialiasing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18630};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef
class CORDL_TYPE PostProcessLayer_SerializedBundleRef : public ::System::Object {
public:
// Declarations
/// @brief Field assemblyQualifiedName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_assemblyQualifiedName, put=__cordl_internal_set_assemblyQualifiedName)) ::StringW  assemblyQualifiedName;

/// @brief Field bundle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundle, put=__cordl_internal_set_bundle)) ::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  bundle;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_assemblyQualifiedName() const;

constexpr ::StringW& __cordl_internal_get_assemblyQualifiedName() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* const& __cordl_internal_get_bundle() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessBundle*& __cordl_internal_get_bundle() ;

constexpr void __cordl_internal_set_assemblyQualifiedName(::StringW  value) ;

constexpr void __cordl_internal_set_bundle(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer_SerializedBundleRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer_SerializedBundleRef", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer_SerializedBundleRef(PostProcessLayer_SerializedBundleRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer_SerializedBundleRef", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer_SerializedBundleRef(PostProcessLayer_SerializedBundleRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18631};

/// @brief Field assemblyQualifiedName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___assemblyQualifiedName;

/// @brief Field bundle, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  ___bundle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef, ___assemblyQualifiedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef, ___bundle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c
class CORDL_TYPE PostProcessLayer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*  __9;

/// @brief Field <>9__54_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_1, put=setStaticF___9__54_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  __9__54_1;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c* New_ctor() ;

/// @brief Method <UpdateBundleSortList>b__54_1, addr 0x181dc0620, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* _UpdateBundleSortList_b__54_1(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>  kvp) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>* getStaticF___9__54_1() ;

static inline void setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*  value) ;

static inline void setStaticF___9__54_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer___c(PostProcessLayer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer___c(PostProcessLayer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object, UnityEngine.Rendering.PostProcessing.PostProcessEvent
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0
class CORDL_TYPE PostProcessLayer___c__DisplayClass54_0 : public ::System::Object {
public:
// Declarations
/// @brief Field effects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_effects, put=__cordl_internal_set_effects)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  effects;

/// @brief Field evt, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_evt, put=__cordl_internal_set_evt)) ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0* New_ctor() ;

/// @brief Method <UpdateBundleSortList>b__0, addr 0x181fd0500, size 0x30, virtual false, abstract: false, final false
inline bool _UpdateBundleSortList_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>  kvp) ;

/// @brief Method <UpdateBundleSortList>b__2, addr 0x181fd0530, size 0x80, virtual false, abstract: false, final false
inline bool _UpdateBundleSortList_b__2(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*  x) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>* const& __cordl_internal_get_effects() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*& __cordl_internal_get_effects() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const& __cordl_internal_get_evt() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent& __cordl_internal_get_evt() ;

constexpr void __cordl_internal_set_effects(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  value) ;

constexpr void __cordl_internal_set_evt(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer___c__DisplayClass54_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer___c__DisplayClass54_0(PostProcessLayer___c__DisplayClass54_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer___c__DisplayClass54_0(PostProcessLayer___c__DisplayClass54_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18633};

/// @brief Field evt, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  ___evt;

/// @brief Field effects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  ___effects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0, ___evt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0, ___effects) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1
class CORDL_TYPE PostProcessLayer___c__DisplayClass54_1 : public ::System::Object {
public:
// Declarations
/// @brief Field searchStr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchStr, put=__cordl_internal_set_searchStr)) ::StringW  searchStr;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1* New_ctor() ;

/// @brief Method <UpdateBundleSortList>b__3, addr 0x181fd05b0, size 0x50, virtual false, abstract: false, final false
inline bool _UpdateBundleSortList_b__3(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  b) ;

constexpr ::StringW const& __cordl_internal_get_searchStr() const;

constexpr ::StringW& __cordl_internal_get_searchStr() ;

constexpr void __cordl_internal_set_searchStr(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer___c__DisplayClass54_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer___c__DisplayClass54_1(PostProcessLayer___c__DisplayClass54_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer___c__DisplayClass54_1(PostProcessLayer___c__DisplayClass54_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18634};

/// @brief Field searchStr, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___searchStr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1, ___searchStr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_2
class CORDL_TYPE PostProcessLayer___c__DisplayClass54_2 : public ::System::Object {
public:
// Declarations
/// @brief Field typeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeName, put=__cordl_internal_set_typeName)) ::StringW  typeName;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2* New_ctor() ;

/// @brief Method <UpdateBundleSortList>b__4, addr 0x181fd0600, size 0x20, virtual false, abstract: false, final false
inline bool _UpdateBundleSortList_b__4(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*  b) ;

constexpr ::StringW const& __cordl_internal_get_typeName() const;

constexpr ::StringW& __cordl_internal_get_typeName() ;

constexpr void __cordl_internal_set_typeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer___c__DisplayClass54_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer___c__DisplayClass54_2(PostProcessLayer___c__DisplayClass54_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer___c__DisplayClass54_2(PostProcessLayer___c__DisplayClass54_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18635};

/// @brief Field typeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___typeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2, ___typeName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_3
class CORDL_TYPE PostProcessLayer___c__DisplayClass54_3 : public ::System::Object {
public:
// Declarations
/// @brief Field typeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeName, put=__cordl_internal_set_typeName)) ::StringW  typeName;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3* New_ctor() ;

/// @brief Method <UpdateBundleSortList>b__5, addr 0x181fd05b0, size 0x50, virtual false, abstract: false, final false
inline bool _UpdateBundleSortList_b__5(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  b) ;

constexpr ::StringW const& __cordl_internal_get_typeName() const;

constexpr ::StringW& __cordl_internal_get_typeName() ;

constexpr void __cordl_internal_set_typeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer___c__DisplayClass54_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer___c__DisplayClass54_3(PostProcessLayer___c__DisplayClass54_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer___c__DisplayClass54_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer___c__DisplayClass54_3(PostProcessLayer___c__DisplayClass54_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18636};

/// @brief Field typeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___typeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3, ___typeName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.DepthTextureMode, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Rendering.PostProcessing.PostProcessLayer::Antialiasing
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessLayer
class CORDL_TYPE PostProcessLayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Antialiasing = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing;

using SerializedBundleRef = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef;

using __c = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c;

using __c__DisplayClass54_0 = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0;

using __c__DisplayClass54_1 = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1;

using __c__DisplayClass54_2 = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2;

using __c__DisplayClass54_3 = ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3;

/// @brief Field <cameraDepthFlags>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraDepthFlags_k__BackingField, put=__cordl_internal_set__cameraDepthFlags_k__BackingField)) ::UnityEngine::DepthTextureMode  _cameraDepthFlags_k__BackingField;

/// @brief Field <haveBundlesBeenInited>k__BackingField, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__haveBundlesBeenInited_k__BackingField, put=__cordl_internal_set__haveBundlesBeenInited_k__BackingField)) bool  _haveBundlesBeenInited_k__BackingField;

/// @brief Field <sortedBundles>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__sortedBundles_k__BackingField, put=__cordl_internal_set__sortedBundles_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  _sortedBundles_k__BackingField;

/// @brief Field antialiasingMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_antialiasingMode, put=__cordl_internal_set_antialiasingMode)) ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  antialiasingMode;

/// @brief Field breakBeforeColorGrading, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_breakBeforeColorGrading, put=__cordl_internal_set_breakBeforeColorGrading)) bool  breakBeforeColorGrading;

 __declspec(property(get=get_cameraDepthFlags, put=set_cameraDepthFlags)) ::UnityEngine::DepthTextureMode  cameraDepthFlags;

/// @brief Field debugLayer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugLayer, put=__cordl_internal_set_debugLayer)) ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  debugLayer;

/// @brief Field dithering, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dithering, put=__cordl_internal_set_dithering)) ::UnityEngine::Rendering::PostProcessing::Dithering*  dithering;

/// @brief Field fastApproximateAntialiasing, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_fastApproximateAntialiasing, put=__cordl_internal_set_fastApproximateAntialiasing)) ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*  fastApproximateAntialiasing;

/// @brief Field finalBlitToCameraTarget, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_finalBlitToCameraTarget, put=__cordl_internal_set_finalBlitToCameraTarget)) bool  finalBlitToCameraTarget;

/// @brief Field fog, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fog, put=__cordl_internal_set_fog)) ::UnityEngine::Rendering::PostProcessing::Fog*  fog;

 __declspec(property(get=get_haveBundlesBeenInited, put=set_haveBundlesBeenInited)) bool  haveBundlesBeenInited;

/// @brief Field m_ActiveEffects, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveEffects, put=__cordl_internal_set_m_ActiveEffects)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>*  m_ActiveEffects;

/// @brief Field m_AfterStackBundles, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AfterStackBundles, put=__cordl_internal_set_m_AfterStackBundles)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  m_AfterStackBundles;

/// @brief Field m_BeforeStackBundles, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BeforeStackBundles, put=__cordl_internal_set_m_BeforeStackBundles)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  m_BeforeStackBundles;

/// @brief Field m_BeforeTransparentBundles, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BeforeTransparentBundles, put=__cordl_internal_set_m_BeforeTransparentBundles)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  m_BeforeTransparentBundles;

/// @brief Field m_Bundles, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Bundles, put=__cordl_internal_set_m_Bundles)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  m_Bundles;

/// @brief Field m_Camera, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Camera, put=__cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera>  m_Camera;

/// @brief Field m_CurrentContext, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentContext, put=__cordl_internal_set_m_CurrentContext)) ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  m_CurrentContext;

/// @brief Field m_IsRenderingInSceneView, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRenderingInSceneView, put=__cordl_internal_set_m_IsRenderingInSceneView)) bool  m_IsRenderingInSceneView;

/// @brief Field m_LegacyCmdBuffer, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyCmdBuffer, put=__cordl_internal_set_m_LegacyCmdBuffer)) ::UnityEngine::Rendering::CommandBuffer*  m_LegacyCmdBuffer;

/// @brief Field m_LegacyCmdBufferBeforeLighting, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyCmdBufferBeforeLighting, put=__cordl_internal_set_m_LegacyCmdBufferBeforeLighting)) ::UnityEngine::Rendering::CommandBuffer*  m_LegacyCmdBufferBeforeLighting;

/// @brief Field m_LegacyCmdBufferBeforeReflections, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyCmdBufferBeforeReflections, put=__cordl_internal_set_m_LegacyCmdBufferBeforeReflections)) ::UnityEngine::Rendering::CommandBuffer*  m_LegacyCmdBufferBeforeReflections;

/// @brief Field m_LegacyCmdBufferOpaque, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyCmdBufferOpaque, put=__cordl_internal_set_m_LegacyCmdBufferOpaque)) ::UnityEngine::Rendering::CommandBuffer*  m_LegacyCmdBufferOpaque;

/// @brief Field m_LogHistogram, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LogHistogram, put=__cordl_internal_set_m_LogHistogram)) ::UnityEngine::Rendering::PostProcessing::LogHistogram*  m_LogHistogram;

/// @brief Field m_NaNKilled, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NaNKilled, put=__cordl_internal_set_m_NaNKilled)) bool  m_NaNKilled;

/// @brief Field m_OldResources, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OldResources, put=__cordl_internal_set_m_OldResources)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  m_OldResources;

/// @brief Field m_PropertySheetFactory, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertySheetFactory, put=__cordl_internal_set_m_PropertySheetFactory)) ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  m_PropertySheetFactory;

/// @brief Field m_Resources, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Resources, put=__cordl_internal_set_m_Resources)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  m_Resources;

/// @brief Field m_SettingsUpdateNeeded, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SettingsUpdateNeeded, put=__cordl_internal_set_m_SettingsUpdateNeeded)) bool  m_SettingsUpdateNeeded;

/// @brief Field m_ShowCustomSorter, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShowCustomSorter, put=__cordl_internal_set_m_ShowCustomSorter)) bool  m_ShowCustomSorter;

/// @brief Field m_ShowToolkit, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShowToolkit, put=__cordl_internal_set_m_ShowToolkit)) bool  m_ShowToolkit;

/// @brief Field m_TargetPool, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetPool, put=__cordl_internal_set_m_TargetPool)) ::UnityEngine::Rendering::PostProcessing::TargetPool*  m_TargetPool;

/// @brief Field m_Targets, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Targets, put=__cordl_internal_set_m_Targets)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>*  m_Targets;

 __declspec(property(get=get_sortedBundles, put=set_sortedBundles)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  sortedBundles;

/// @brief Field stopNaNPropagation, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_stopNaNPropagation, put=__cordl_internal_set_stopNaNPropagation)) bool  stopNaNPropagation;

/// @brief Field subpixelMorphologicalAntialiasing, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_subpixelMorphologicalAntialiasing, put=__cordl_internal_set_subpixelMorphologicalAntialiasing)) ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*  subpixelMorphologicalAntialiasing;

/// @brief Field temporalAntialiasing, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporalAntialiasing, put=__cordl_internal_set_temporalAntialiasing)) ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  temporalAntialiasing;

/// @brief Field volumeLayer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_volumeLayer, put=__cordl_internal_set_volumeLayer)) ::UnityEngine::LayerMask  volumeLayer;

/// @brief Field volumeTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumeTrigger, put=__cordl_internal_set_volumeTrigger)) ::UnityW<::UnityEngine::Transform>  volumeTrigger;

/// @brief Method ApplyDefaultFlip, addr 0x181fc2d70, size 0x70, virtual false, abstract: false, final false
inline void ApplyDefaultFlip(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method ApplyFlip, addr 0x181fc2de0, size 0xb0, virtual false, abstract: false, final false
inline void ApplyFlip(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method BakeMSVOMap, addr 0x181fc2e90, size 0x110, virtual false, abstract: false, final false
inline void BakeMSVOMap(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>  depthMap, bool  invert, bool  isMSAA) ;

/// @brief Method BuildCommandBuffers, addr 0x181fc2fa0, size 0xe60, virtual false, abstract: false, final false
inline void BuildCommandBuffers() ;

/// @brief Method DynamicResolutionAllowsFinalBlitToCameraTarget, addr 0x181fc3e00, size 0x90, virtual false, abstract: false, final false
inline bool DynamicResolutionAllowsFinalBlitToCameraTarget() ;

/// @brief Method GetBundle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* GetBundle() ;

/// @brief Method GetBundle, addr 0x181fc3e90, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* GetBundle(::System::Type*  settingsType) ;

/// @brief Method GetSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetSettings() ;

/// @brief Method HasActiveEffects, addr 0x181fc3eb0, size 0xe0, virtual false, abstract: false, final false
inline bool HasActiveEffects(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method HasOpaqueOnlyEffects, addr 0x181fc3f90, size 0x10, virtual false, abstract: false, final false
inline bool HasOpaqueOnlyEffects(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method Init, addr 0x181fc4430, size 0xa0, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  resources) ;

/// @brief Method InitBundles, addr 0x181fc3fa0, size 0x2c0, virtual false, abstract: false, final false
inline void InitBundles() ;

/// @brief Method InitLegacy, addr 0x181fc4260, size 0x1d0, virtual false, abstract: false, final false
inline void InitLegacy() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fc44d0, size 0x350, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181fc4820, size 0x2e0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPostRender, addr 0x181fc4b00, size 0x180, virtual false, abstract: false, final false
inline void OnPostRender() ;

/// @brief Method OnPreCull, addr 0x181fc4c80, size 0x490, virtual false, abstract: false, final false
inline void OnPreCull() ;

/// @brief Method OnPreRender, addr 0x181fc5110, size 0x50, virtual false, abstract: false, final false
inline void OnPreRender() ;

/// @brief Method OnRenderImage, addr 0x181fc5160, size 0x60, virtual false, abstract: false, final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dst) ;

/// @brief Method OverrideSettings, addr 0x181fc51c0, size 0x170, virtual false, abstract: false, final false
inline void OverrideSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  baseSettings, float_t  interpFactor) ;

/// @brief Method Render, addr 0x181fc6ae0, size 0xaf0, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderBuiltins, addr 0x181fc5330, size 0x9c0, virtual false, abstract: false, final false
inline int32_t RenderBuiltins(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, bool  isFinalPass, int32_t  releaseTargetAfterUse, int32_t  eye) ;

/// @brief Method RenderEffect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline int32_t RenderEffect(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, bool  useTempTarget) ;

/// @brief Method RenderFinalPass, addr 0x181fc5cf0, size 0x720, virtual false, abstract: false, final false
inline void RenderFinalPass(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, int32_t  releaseTargetAfterUse, int32_t  eye) ;

/// @brief Method RenderInjectionPoint, addr 0x181fc6410, size 0x1c0, virtual false, abstract: false, final false
inline int32_t RenderInjectionPoint(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::StringW  marker, int32_t  releaseTargetAfterUse) ;

/// @brief Method RenderList, addr 0x181fc65d0, size 0x470, virtual false, abstract: false, final false
inline void RenderList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  list, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::StringW  marker) ;

/// @brief Method RenderOpaqueOnly, addr 0x181fc6a40, size 0xa0, virtual false, abstract: false, final false
inline void RenderOpaqueOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RequiresInitialBlit, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
static inline bool RequiresInitialBlit(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method Reset, addr 0x181fc7680, size 0x30, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetHistory, addr 0x181fc75d0, size 0xb0, virtual false, abstract: false, final false
inline void ResetHistory() ;

/// @brief Method SetLegacyCameraFlags, addr 0x181fc76b0, size 0x1c0, virtual false, abstract: false, final false
inline void SetLegacyCameraFlags(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method SetupContext, addr 0x181fc7870, size 0x300, virtual false, abstract: false, final false
inline void SetupContext(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ShouldGenerateLogHistogram, addr 0x181fc7b70, size 0x70, virtual false, abstract: false, final false
inline bool ShouldGenerateLogHistogram(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method UpdateBundleSortList, addr 0x181fc7be0, size 0x350, virtual false, abstract: false, final false
inline void UpdateBundleSortList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  sortedList, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt) ;

/// @brief Method UpdateSrcDstForOpaqueOnly, addr 0x181fc7f30, size 0x160, virtual false, abstract: false, final false
inline void UpdateSrcDstForOpaqueOnly(::by_ref<int32_t>  src, ::by_ref<int32_t>  dst, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::Rendering::RenderTargetIdentifier  cameraTarget, int32_t  opaqueOnlyEffectsRemaining) ;

/// @brief Method UpdateVolumeSystem, addr 0x181fc8090, size 0xe0, virtual false, abstract: false, final false
inline void UpdateVolumeSystem(::UnityEngine::Camera*  cam, ::UnityEngine::Rendering::CommandBuffer*  cmd) ;

constexpr ::UnityEngine::DepthTextureMode const& __cordl_internal_get__cameraDepthFlags_k__BackingField() const;

constexpr ::UnityEngine::DepthTextureMode& __cordl_internal_get__cameraDepthFlags_k__BackingField() ;

constexpr bool const& __cordl_internal_get__haveBundlesBeenInited_k__BackingField() const;

constexpr bool& __cordl_internal_get__haveBundlesBeenInited_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>* const& __cordl_internal_get__sortedBundles_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*& __cordl_internal_get__sortedBundles_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const& __cordl_internal_get_antialiasingMode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing& __cordl_internal_get_antialiasingMode() ;

constexpr bool const& __cordl_internal_get_breakBeforeColorGrading() const;

constexpr bool& __cordl_internal_get_breakBeforeColorGrading() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* const& __cordl_internal_get_debugLayer() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*& __cordl_internal_get_debugLayer() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Dithering* const& __cordl_internal_get_dithering() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Dithering*& __cordl_internal_get_dithering() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing* const& __cordl_internal_get_fastApproximateAntialiasing() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*& __cordl_internal_get_fastApproximateAntialiasing() ;

constexpr bool const& __cordl_internal_get_finalBlitToCameraTarget() const;

constexpr bool& __cordl_internal_get_finalBlitToCameraTarget() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Fog* const& __cordl_internal_get_fog() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Fog*& __cordl_internal_get_fog() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>* const& __cordl_internal_get_m_ActiveEffects() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>*& __cordl_internal_get_m_ActiveEffects() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>* const& __cordl_internal_get_m_AfterStackBundles() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*& __cordl_internal_get_m_AfterStackBundles() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>* const& __cordl_internal_get_m_BeforeStackBundles() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*& __cordl_internal_get_m_BeforeStackBundles() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>* const& __cordl_internal_get_m_BeforeTransparentBundles() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*& __cordl_internal_get_m_BeforeTransparentBundles() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>* const& __cordl_internal_get_m_Bundles() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*& __cordl_internal_get_m_Bundles() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* const& __cordl_internal_get_m_CurrentContext() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*& __cordl_internal_get_m_CurrentContext() ;

constexpr bool const& __cordl_internal_get_m_IsRenderingInSceneView() const;

constexpr bool& __cordl_internal_get_m_IsRenderingInSceneView() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_LegacyCmdBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_LegacyCmdBuffer() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_LegacyCmdBufferBeforeLighting() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_LegacyCmdBufferBeforeLighting() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_LegacyCmdBufferBeforeReflections() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_LegacyCmdBufferBeforeReflections() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_LegacyCmdBufferOpaque() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_LegacyCmdBufferOpaque() ;

constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram* const& __cordl_internal_get_m_LogHistogram() const;

constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram*& __cordl_internal_get_m_LogHistogram() ;

constexpr bool const& __cordl_internal_get_m_NaNKilled() const;

constexpr bool& __cordl_internal_get_m_NaNKilled() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& __cordl_internal_get_m_OldResources() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& __cordl_internal_get_m_OldResources() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* const& __cordl_internal_get_m_PropertySheetFactory() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*& __cordl_internal_get_m_PropertySheetFactory() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& __cordl_internal_get_m_Resources() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& __cordl_internal_get_m_Resources() ;

constexpr bool const& __cordl_internal_get_m_SettingsUpdateNeeded() const;

constexpr bool& __cordl_internal_get_m_SettingsUpdateNeeded() ;

constexpr bool const& __cordl_internal_get_m_ShowCustomSorter() const;

constexpr bool& __cordl_internal_get_m_ShowCustomSorter() ;

constexpr bool const& __cordl_internal_get_m_ShowToolkit() const;

constexpr bool& __cordl_internal_get_m_ShowToolkit() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TargetPool* const& __cordl_internal_get_m_TargetPool() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TargetPool*& __cordl_internal_get_m_TargetPool() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>* const& __cordl_internal_get_m_Targets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>*& __cordl_internal_get_m_Targets() ;

constexpr bool const& __cordl_internal_get_stopNaNPropagation() const;

constexpr bool& __cordl_internal_get_stopNaNPropagation() ;

constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing* const& __cordl_internal_get_subpixelMorphologicalAntialiasing() const;

constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*& __cordl_internal_get_subpixelMorphologicalAntialiasing() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* const& __cordl_internal_get_temporalAntialiasing() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*& __cordl_internal_get_temporalAntialiasing() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_volumeLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_volumeLayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_volumeTrigger() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_volumeTrigger() ;

constexpr void __cordl_internal_set__cameraDepthFlags_k__BackingField(::UnityEngine::DepthTextureMode  value) ;

constexpr void __cordl_internal_set__haveBundlesBeenInited_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__sortedBundles_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  value) ;

constexpr void __cordl_internal_set_antialiasingMode(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  value) ;

constexpr void __cordl_internal_set_breakBeforeColorGrading(bool  value) ;

constexpr void __cordl_internal_set_debugLayer(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  value) ;

constexpr void __cordl_internal_set_dithering(::UnityEngine::Rendering::PostProcessing::Dithering*  value) ;

constexpr void __cordl_internal_set_fastApproximateAntialiasing(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*  value) ;

constexpr void __cordl_internal_set_finalBlitToCameraTarget(bool  value) ;

constexpr void __cordl_internal_set_fog(::UnityEngine::Rendering::PostProcessing::Fog*  value) ;

constexpr void __cordl_internal_set_m_ActiveEffects(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>*  value) ;

constexpr void __cordl_internal_set_m_AfterStackBundles(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  value) ;

constexpr void __cordl_internal_set_m_BeforeStackBundles(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  value) ;

constexpr void __cordl_internal_set_m_BeforeTransparentBundles(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  value) ;

constexpr void __cordl_internal_set_m_Bundles(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  value) ;

constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_CurrentContext(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  value) ;

constexpr void __cordl_internal_set_m_IsRenderingInSceneView(bool  value) ;

constexpr void __cordl_internal_set_m_LegacyCmdBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_m_LegacyCmdBufferBeforeLighting(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_m_LegacyCmdBufferBeforeReflections(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_m_LegacyCmdBufferOpaque(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_m_LogHistogram(::UnityEngine::Rendering::PostProcessing::LogHistogram*  value) ;

constexpr void __cordl_internal_set_m_NaNKilled(bool  value) ;

constexpr void __cordl_internal_set_m_OldResources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value) ;

constexpr void __cordl_internal_set_m_PropertySheetFactory(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value) ;

constexpr void __cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value) ;

constexpr void __cordl_internal_set_m_SettingsUpdateNeeded(bool  value) ;

constexpr void __cordl_internal_set_m_ShowCustomSorter(bool  value) ;

constexpr void __cordl_internal_set_m_ShowToolkit(bool  value) ;

constexpr void __cordl_internal_set_m_TargetPool(::UnityEngine::Rendering::PostProcessing::TargetPool*  value) ;

constexpr void __cordl_internal_set_m_Targets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>*  value) ;

constexpr void __cordl_internal_set_stopNaNPropagation(bool  value) ;

constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*  value) ;

constexpr void __cordl_internal_set_temporalAntialiasing(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  value) ;

constexpr void __cordl_internal_set_volumeLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_volumeTrigger(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x181fc8170, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cameraDepthFlags, addr 0x180408b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode get_cameraDepthFlags() ;

/// @brief Method get_haveBundlesBeenInited, addr 0x181fc8210, size 0x10, virtual false, abstract: false, final false
inline bool get_haveBundlesBeenInited() ;

/// @brief Method get_sortedBundles, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>* get_sortedBundles() ;

/// @brief Method set_cameraDepthFlags, addr 0x180b9feb0, size 0x2630, virtual false, abstract: false, final false
inline void set_cameraDepthFlags(::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_haveBundlesBeenInited, addr 0x181fc8220, size 0x10, virtual false, abstract: false, final false
inline void set_haveBundlesBeenInited(bool  value) ;

/// @brief Method set_sortedBundles, addr 0x18163ca40, size 0x20, virtual false, abstract: false, final false
inline void set_sortedBundles(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessLayer(PostProcessLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessLayer(PostProcessLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18637};

/// @brief Field volumeTrigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___volumeTrigger;

/// @brief Field volumeLayer, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___volumeLayer;

/// @brief Field stopNaNPropagation, offset: 0x2c, size: 0x1, def value: None
 bool  ___stopNaNPropagation;

/// @brief Field finalBlitToCameraTarget, offset: 0x2d, size: 0x1, def value: None
 bool  ___finalBlitToCameraTarget;

/// @brief Field antialiasingMode, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  ___antialiasingMode;

/// @brief Field temporalAntialiasing, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  ___temporalAntialiasing;

/// @brief Field subpixelMorphologicalAntialiasing, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*  ___subpixelMorphologicalAntialiasing;

/// @brief Field fastApproximateAntialiasing, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*  ___fastApproximateAntialiasing;

/// @brief Field fog, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Fog*  ___fog;

/// @brief Field dithering, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Dithering*  ___dithering;

/// @brief Field debugLayer, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  ___debugLayer;

/// @brief Field m_Resources, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  ___m_Resources;

/// @brief Field m_OldResources, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  ___m_OldResources;

/// @brief Field m_ShowToolkit, offset: 0x78, size: 0x1, def value: None
 bool  ___m_ShowToolkit;

/// @brief Field m_ShowCustomSorter, offset: 0x79, size: 0x1, def value: None
 bool  ___m_ShowCustomSorter;

/// @brief Field breakBeforeColorGrading, offset: 0x7a, size: 0x1, def value: None
 bool  ___breakBeforeColorGrading;

/// @brief Field m_BeforeTransparentBundles, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  ___m_BeforeTransparentBundles;

/// @brief Field m_BeforeStackBundles, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  ___m_BeforeStackBundles;

/// @brief Field m_AfterStackBundles, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  ___m_AfterStackBundles;

/// @brief Field <sortedBundles>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  ____sortedBundles_k__BackingField;

/// @brief Field <cameraDepthFlags>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 ::UnityEngine::DepthTextureMode  ____cameraDepthFlags_k__BackingField;

/// @brief Field <haveBundlesBeenInited>k__BackingField, offset: 0xa4, size: 0x1, def value: None
 bool  ____haveBundlesBeenInited_k__BackingField;

/// @brief Field m_Bundles, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  ___m_Bundles;

/// @brief Field m_PropertySheetFactory, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  ___m_PropertySheetFactory;

/// @brief Field m_LegacyCmdBufferBeforeReflections, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___m_LegacyCmdBufferBeforeReflections;

/// @brief Field m_LegacyCmdBufferBeforeLighting, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___m_LegacyCmdBufferBeforeLighting;

/// @brief Field m_LegacyCmdBufferOpaque, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___m_LegacyCmdBufferOpaque;

/// @brief Field m_LegacyCmdBuffer, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___m_LegacyCmdBuffer;

/// @brief Field m_Camera, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_Camera;

/// @brief Field m_CurrentContext, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  ___m_CurrentContext;

/// @brief Field m_LogHistogram, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::LogHistogram*  ___m_LogHistogram;

/// @brief Field m_SettingsUpdateNeeded, offset: 0xf0, size: 0x1, def value: None
 bool  ___m_SettingsUpdateNeeded;

/// @brief Field m_IsRenderingInSceneView, offset: 0xf1, size: 0x1, def value: None
 bool  ___m_IsRenderingInSceneView;

/// @brief Field m_TargetPool, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TargetPool*  ___m_TargetPool;

/// @brief Field m_NaNKilled, offset: 0x100, size: 0x1, def value: None
 bool  ___m_NaNKilled;

/// @brief Field m_ActiveEffects, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>*  ___m_ActiveEffects;

/// @brief Field m_Targets, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>*  ___m_Targets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___volumeTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___volumeLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___stopNaNPropagation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___finalBlitToCameraTarget) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___antialiasingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___temporalAntialiasing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___subpixelMorphologicalAntialiasing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___fastApproximateAntialiasing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___fog) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___dithering) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___debugLayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_Resources) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_OldResources) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_ShowToolkit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_ShowCustomSorter) == 0x79, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___breakBeforeColorGrading) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_BeforeTransparentBundles) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_BeforeStackBundles) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_AfterStackBundles) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ____sortedBundles_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ____cameraDepthFlags_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ____haveBundlesBeenInited_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_Bundles) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_PropertySheetFactory) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_LegacyCmdBufferBeforeReflections) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_LegacyCmdBufferBeforeLighting) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_LegacyCmdBufferOpaque) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_LegacyCmdBuffer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_Camera) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_CurrentContext) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_LogHistogram) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_SettingsUpdateNeeded) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_IsRenderingInSceneView) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_TargetPool) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_NaNKilled) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_ActiveEffects) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer, ___m_Targets) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessLayer) == 0x118, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
