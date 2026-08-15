#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DynamicWavesLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicWavesLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class DynamicWavesLodSettings;
}
namespace WaveHarmonic::Crest {
class DynamicWavesLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
struct PropertyWrapperCompute;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DynamicWavesLod;
}
namespace WaveHarmonic::Crest {
class DynamicWavesLod_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DynamicWavesLod*);
MARK_REF_T(::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DynamicWavesLod*, "WaveHarmonic.Crest", "DynamicWavesLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs*, "WaveHarmonic.Crest", "DynamicWavesLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DynamicWavesLod/ShaderIDs
class CORDL_TYPE DynamicWavesLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_CourantNumber, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CourantNumber, put=setStaticF_s_CourantNumber)) int32_t  s_CourantNumber;

/// @brief Field s_Damping, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Damping, put=setStaticF_s_Damping)) int32_t  s_Damping;

/// @brief Field s_DisplaceClamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DisplaceClamp, put=setStaticF_s_DisplaceClamp)) int32_t  s_DisplaceClamp;

/// @brief Field s_Gravity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Gravity, put=setStaticF_s_Gravity)) int32_t  s_Gravity;

/// @brief Field s_HorizontalDisplace, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HorizontalDisplace, put=setStaticF_s_HorizontalDisplace)) int32_t  s_HorizontalDisplace;

static inline int32_t getStaticF_s_CourantNumber() ;

static inline int32_t getStaticF_s_Damping() ;

static inline int32_t getStaticF_s_DisplaceClamp() ;

static inline int32_t getStaticF_s_Gravity() ;

static inline int32_t getStaticF_s_HorizontalDisplace() ;

static inline void setStaticF_s_CourantNumber(int32_t  value) ;

static inline void setStaticF_s_Damping(int32_t  value) ;

static inline void setStaticF_s_DisplaceClamp(int32_t  value) ;

static inline void setStaticF_s_Gravity(int32_t  value) ;

static inline void setStaticF_s_HorizontalDisplace(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicWavesLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicWavesLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicWavesLod_ShaderIDs(DynamicWavesLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicWavesLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicWavesLod_ShaderIDs(DynamicWavesLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.PersistentLod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DynamicWavesLod
class CORDL_TYPE DynamicWavesLod : public ::WaveHarmonic::Crest::PersistentLod {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::DynamicWavesLod_ShaderIDs;

 __declspec(property(get=get_AttenuationInShallows, put=set_AttenuationInShallows)) float_t  AttenuationInShallows;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_Settings, put=set_Settings)) ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  Settings;

 __declspec(property(get=get_SimulationShader)) ::UnityW<::UnityEngine::ComputeShader>  SimulationShader;

 __declspec(property(get=get_TimeLeftToSimulate)) float_t  TimeLeftToSimulate;

/// @brief Field _AttenuationInShallows, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__AttenuationInShallows, put=__cordl_internal_set__AttenuationInShallows)) float_t  _AttenuationInShallows;

/// @brief Field _DefaultSettings, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultSettings, put=__cordl_internal_set__DefaultSettings)) ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  _DefaultSettings;

/// @brief Field _Settings, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Settings, put=__cordl_internal_set__Settings)) ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  _Settings;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void Bind(T  target) ;

/// @brief Method Destroy, addr 0x182557ee0, size 0x30, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x182557f10, size 0x20, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x182557f30, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method GetSettings, addr 0x182557f40, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> GetSettings() ;

static inline ::WaveHarmonic::Crest::DynamicWavesLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x182558030, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetAdditionalSimulationParameters, addr 0x182558080, size 0x110, virtual true, abstract: false, final false
inline void SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  simMaterial) ;

constexpr float_t const& __cordl_internal_get__AttenuationInShallows() const;

constexpr float_t& __cordl_internal_get__AttenuationInShallows() ;

constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> const& __cordl_internal_get__DefaultSettings() const;

constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>& __cordl_internal_get__DefaultSettings() ;

constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> const& __cordl_internal_get__Settings() const;

constexpr ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>& __cordl_internal_get__Settings() ;

constexpr void __cordl_internal_set__AttenuationInShallows(float_t  value) ;

constexpr void __cordl_internal_set__DefaultSettings(::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  value) ;

constexpr void __cordl_internal_set__Settings(::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  value) ;

/// @brief Method .ctor, addr 0x182558240, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_AttenuationInShallows, addr 0x1804979a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_AttenuationInShallows() ;

/// @brief Method get_ClearColor, addr 0x182263110, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_GizmoColor, addr 0x182557e60, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x182558280, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x182557ea0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x182558290, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_RequestedTextureFormat, addr 0x1825582a0, size 0xb0, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_Settings, addr 0x182558350, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings> get_Settings() ;

/// @brief Method get_SimulationShader, addr 0x182558440, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_SimulationShader() ;

/// @brief Method get_TimeLeftToSimulate, addr 0x1803054e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TimeLeftToSimulate() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

/// @brief Method set_AttenuationInShallows, addr 0x180497ab0, size 0x10, virtual false, abstract: false, final false
inline void set_AttenuationInShallows(float_t  value) ;

/// @brief Method set_Settings, addr 0x1813fdbb0, size 0x20, virtual false, abstract: false, final false
inline void set_Settings(::WaveHarmonic::Crest::DynamicWavesLodSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicWavesLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicWavesLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicWavesLod(DynamicWavesLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicWavesLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicWavesLod(DynamicWavesLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16493};

/// @brief Field k_DynamicWavesKeyword offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DynamicWavesKeyword{u"CREST_DYNAMIC_WAVE_SIM_ON_INTERNAL"};

/// @brief Field _AttenuationInShallows, offset: 0xb8, size: 0x4, def value: None
 float_t  ____AttenuationInShallows;

/// @brief Field _Settings, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  ____Settings;

/// @brief Field _DefaultSettings, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::DynamicWavesLodSettings>  ____DefaultSettings;

/// @brief Size padding 0xe0 - 0xd0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLod, ____AttenuationInShallows) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLod, ____Settings) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLod, ____DefaultSettings) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DynamicWavesLod) == 0xe0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
