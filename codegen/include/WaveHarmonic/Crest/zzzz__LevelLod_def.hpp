#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LevelLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LevelLod;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LevelLod*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LevelLod*, "WaveHarmonic.Crest", "LevelLod");
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.Lod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LevelLod
class CORDL_TYPE LevelLod : public ::WaveHarmonic::Crest::Lod {
public:
// Declarations
 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

static inline ::WaveHarmonic::Crest::LevelLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x18255a3e0, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method .ctor, addr 0x18255a4e0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_ClearColor, addr 0x182263110, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_GizmoColor, addr 0x18255a360, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x18255a520, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x18255a3a0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x18255a530, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_RequestedTextureFormat, addr 0x18255a540, size 0xb0, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelLod(LevelLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelLod(LevelLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16498};

/// @brief Size padding 0xa0 - 0x98 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::LevelLod) == 0xa0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
