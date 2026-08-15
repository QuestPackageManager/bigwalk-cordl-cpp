#pragma once
// IWYU pragma private; include "Enviro/EnviroURPRenderGraph.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Enviro/zzzz__EnviroURPRenderGraph_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderGraph_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph_PassData::*)()>(&::Enviro::EnviroURPRenderGraph_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_src()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___src;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_src() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___src;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_src(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___src = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read1;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read1;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_read1(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___read1 = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read2;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read2;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_read2(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___read2 = value;
}
constexpr ::UnityEngine::Vector4& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_scaleBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleBias;
}
constexpr ::UnityEngine::Vector4 const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_scaleBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleBias;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_scaleBias(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleBias = value;
}
constexpr ::StringW& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_srcName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcName;
}
constexpr ::StringW const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_srcName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcName;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_srcName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcName = value;
}
constexpr ::StringW& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read1Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read1Name;
}
constexpr ::StringW const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read1Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read1Name;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_read1Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___read1Name = value;
}
constexpr ::StringW& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read2Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read2Name;
}
constexpr ::StringW const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_read2Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read2Name;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_read2Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___read2Name = value;
}
constexpr int32_t& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_pass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pass;
}
constexpr int32_t const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_pass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pass;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_pass(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pass = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void Enviro::EnviroURPRenderGraph_PassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
inline void Enviro::EnviroURPRenderGraph_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroURPRenderGraph_PassData* Enviro::EnviroURPRenderGraph_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroURPRenderGraph_PassData*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroURPRenderGraph_PassData::EnviroURPRenderGraph_PassData()   {
}
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph___c::*)()>(&::Enviro::EnviroURPRenderGraph___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph___c._Blit_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph___c::*)(::Enviro::EnviroURPRenderGraph_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::Enviro::EnviroURPRenderGraph___c::_Blit_b__8_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18060bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<Blit>b__8_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph___c._Blit_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph___c::*)(::Enviro::EnviroURPRenderGraph_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::Enviro::EnviroURPRenderGraph___c::_Blit_b__9_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18060bc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<Blit>b__9_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph___c._Blit_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph___c::*)(::Enviro::EnviroURPRenderGraph_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::Enviro::EnviroURPRenderGraph___c::_Blit_b__10_0)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18060ba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<Blit>b__10_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph___c._RecordRenderGraph_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph___c::*)(::Enviro::EnviroURPRenderGraph_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::Enviro::EnviroURPRenderGraph___c::_RecordRenderGraph_b__12_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18060bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<RecordRenderGraph>b__12_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void Enviro::EnviroURPRenderGraph___c::setStaticF___9(::Enviro::EnviroURPRenderGraph___c*  value)  {
::cordl_internals::setStaticField<::Enviro::EnviroURPRenderGraph___c*, "<>9", ::Enviro::EnviroURPRenderGraph___c*>(std::forward<::Enviro::EnviroURPRenderGraph___c*>(value));
}
inline ::Enviro::EnviroURPRenderGraph___c* Enviro::EnviroURPRenderGraph___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Enviro::EnviroURPRenderGraph___c*, "<>9", ::Enviro::EnviroURPRenderGraph___c*>();
}
inline void Enviro::EnviroURPRenderGraph___c::setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__8_0", ::Enviro::EnviroURPRenderGraph___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* Enviro::EnviroURPRenderGraph___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__8_0", ::Enviro::EnviroURPRenderGraph___c*>();
}
inline void Enviro::EnviroURPRenderGraph___c::setStaticF___9__9_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__9_0", ::Enviro::EnviroURPRenderGraph___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* Enviro::EnviroURPRenderGraph___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__9_0", ::Enviro::EnviroURPRenderGraph___c*>();
}
inline void Enviro::EnviroURPRenderGraph___c::setStaticF___9__10_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__10_0", ::Enviro::EnviroURPRenderGraph___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* Enviro::EnviroURPRenderGraph___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__10_0", ::Enviro::EnviroURPRenderGraph___c*>();
}
inline void Enviro::EnviroURPRenderGraph___c::setStaticF___9__12_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__12_0", ::Enviro::EnviroURPRenderGraph___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* Enviro::EnviroURPRenderGraph___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__12_0", ::Enviro::EnviroURPRenderGraph___c*>();
}
inline void Enviro::EnviroURPRenderGraph___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroURPRenderGraph___c::_Blit_b__8_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<Blit>b__8_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void Enviro::EnviroURPRenderGraph___c::_Blit_b__9_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<Blit>b__9_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void Enviro::EnviroURPRenderGraph___c::_Blit_b__10_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<Blit>b__10_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void Enviro::EnviroURPRenderGraph___c::_RecordRenderGraph_b__12_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph___c*>(),
                        {"<RecordRenderGraph>b__12_0", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::Enviro::EnviroURPRenderGraph___c* Enviro::EnviroURPRenderGraph___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroURPRenderGraph___c*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroURPRenderGraph___c::EnviroURPRenderGraph___c()   {
}
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.CreateCloudsRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::EnviroVolumetricCloudRenderer* (::Enviro::EnviroURPRenderGraph::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroURPRenderGraph::CreateCloudsRenderer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180607870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"CreateCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.GetCloudsRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::EnviroVolumetricCloudRenderer* (::Enviro::EnviroURPRenderGraph::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroURPRenderGraph::GetCloudsRenderer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180607930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"GetCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph::*)(::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::Enviro::EnviroURPRenderGraph::Blit)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x180607060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"Blit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph::*)(::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::StringW)>(&::Enviro::EnviroURPRenderGraph::Blit)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x180606c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"Blit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph::*)(::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::StringW)>(&::Enviro::EnviroURPRenderGraph::Blit)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x1806073d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"Blit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroURPRenderGraph::SetMatrix)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1806087d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::Enviro::EnviroURPRenderGraph::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xd60;
  constexpr static std::size_t addrs = 0x180607a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                    {::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderGraph::*)()>(&::Enviro::EnviroURPRenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180608d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& Enviro::EnviroURPRenderGraph::__cordl_internal_get_m_ScaleBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleBias;
}
constexpr ::UnityEngine::Vector4 const& Enviro::EnviroURPRenderGraph::__cordl_internal_get_m_ScaleBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleBias;
}
constexpr void Enviro::EnviroURPRenderGraph::__cordl_internal_set_m_ScaleBias(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleBias = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*& Enviro::EnviroURPRenderGraph::__cordl_internal_get_volumetricCloudsRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsRender;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>* const& Enviro::EnviroURPRenderGraph::__cordl_internal_get_volumetricCloudsRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsRender;
}
constexpr void Enviro::EnviroURPRenderGraph::__cordl_internal_set_volumetricCloudsRender(::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricCloudsRender = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroURPRenderGraph::__cordl_internal_get_blitThroughMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitThroughMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroURPRenderGraph::__cordl_internal_get_blitThroughMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitThroughMat;
}
constexpr void Enviro::EnviroURPRenderGraph::__cordl_internal_set_blitThroughMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitThroughMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroURPRenderGraph::__cordl_internal_get_fogMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroURPRenderGraph::__cordl_internal_get_fogMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogMat;
}
constexpr void Enviro::EnviroURPRenderGraph::__cordl_internal_set_fogMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogMat = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroURPRenderGraph::__cordl_internal_get_floatingPointOriginMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroURPRenderGraph::__cordl_internal_get_floatingPointOriginMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr void Enviro::EnviroURPRenderGraph::__cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingPointOriginMod = value;
}
inline ::Enviro::EnviroVolumetricCloudRenderer* Enviro::EnviroURPRenderGraph::CreateCloudsRenderer(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"CreateCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::EnviroVolumetricCloudRenderer*>(this, ___internal_method, cam);
}
inline ::Enviro::EnviroVolumetricCloudRenderer* Enviro::EnviroURPRenderGraph::GetCloudsRenderer(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"GetCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::EnviroVolumetricCloudRenderer*>(this, ___internal_method, cam);
}
inline void Enviro::EnviroURPRenderGraph::Blit(::StringW  passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  mat, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"Blit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passName, renderGraph, mat, src, target, pass);
}
inline void Enviro::EnviroURPRenderGraph::Blit(::StringW  passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  mat, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, int32_t  pass, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read1, ::StringW  read1Name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"Blit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passName, renderGraph, mat, src, target, pass, read1, read1Name);
}
inline void Enviro::EnviroURPRenderGraph::Blit(::StringW  passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  mat, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, int32_t  pass, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read1, ::StringW  read1Name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read2, ::StringW  read2Name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"Blit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passName, renderGraph, mat, src, target, pass, read1, read1Name, read2, read2Name);
}
inline void Enviro::EnviroURPRenderGraph::SetMatrix(::UnityEngine::Camera*  myCam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myCam);
}
inline void Enviro::EnviroURPRenderGraph::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void Enviro::EnviroURPRenderGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroURPRenderGraph* Enviro::EnviroURPRenderGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroURPRenderGraph*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroURPRenderGraph::EnviroURPRenderGraph()   {
}
