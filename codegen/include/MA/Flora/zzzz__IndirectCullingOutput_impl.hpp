#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingOutput.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_def.hpp"
#include "MA/Flora/zzzz__IndirectDrawBin_def.hpp"
#include "MA/Flora/zzzz__IndirectDrawChunk_def.hpp"
#include "MA/Flora/zzzz__IndirectDrawCommandInfo_def.hpp"
#include "MA/Flora/zzzz__IndirectDrawInfo_def.hpp"
#include "MA/Flora/zzzz__IndirectDrawTemplate_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::MA::Flora::IndirectCullingOutput.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingOutput::*)()>(&::MA::Flora::IndirectCullingOutput::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingOutput>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingOutput.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingOutput::*)()>(&::MA::Flora::IndirectCullingOutput::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814bfdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingOutput>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::IndirectCullingOutput::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingOutput>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::IndirectCullingOutput::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingOutput>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::IndirectCullingOutput::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::IndirectCullingOutput::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "DrawChunks", ty: "::MA::Flora::IndirectDrawChunk*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawTemplates", ty: "::MA::Flora::IndirectDrawTemplate*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawTemplateCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBins", ty: "::MA::Flora::IndirectDrawBin*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBinCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawInfos", ty: "::MA::Flora::IndirectDrawInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawCommandInfos", ty: "::MA::Flora::IndirectDrawCommandInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibilityBufferCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingOutput::IndirectCullingOutput(::MA::Flora::IndirectDrawChunk*  DrawChunks, int32_t  DrawChunkCount, ::MA::Flora::IndirectDrawTemplate*  DrawTemplates, int32_t  DrawTemplateCount, ::MA::Flora::IndirectDrawBin*  DrawBins, int32_t  DrawBinCount, ::MA::Flora::IndirectDrawInfo*  DrawInfos, ::MA::Flora::IndirectDrawCommandInfo*  DrawCommandInfos, int32_t  DrawCount, int32_t  VisibilityBufferCapacity) noexcept  {
this->DrawChunks = DrawChunks;
this->DrawChunkCount = DrawChunkCount;
this->DrawTemplates = DrawTemplates;
this->DrawTemplateCount = DrawTemplateCount;
this->DrawBins = DrawBins;
this->DrawBinCount = DrawBinCount;
this->DrawInfos = DrawInfos;
this->DrawCommandInfos = DrawCommandInfos;
this->DrawCount = DrawCount;
this->VisibilityBufferCapacity = VisibilityBufferCapacity;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingOutput::IndirectCullingOutput()   {
}
