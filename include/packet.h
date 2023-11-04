#ifndef PACKET_H
#define PACKET_H


#include "definitions.h"





typedef union Packet_u
{
    // ***************
    // HANDSHAKE STATE
    // ***************

    struct 
    {
        ff_VarInt protocol_version;
        ff_String_t string;
        ff_UShort port;
        // TODO ff_VarIntEnum (?) next_state;
    } Handshake_sb ff_DEPRECATED("Unimplemented");

    // TODO
    struct 
    {

    } LegacyServerListPing_sb ff_DEPRECATED("Unimplemented");

    struct 
    {
        ff_String_t json;
    } StatusResponse_cb;

    struct 
    {
        ff_Long payload;
    } PingResponseStatus_cb;

    struct 
    {
        // TODO nothing here... remove?
    } StatusRequest_sb;

    struct 
    {
        ff_Long payload;
    } PingRequestStatus_sb;

    // ***********
    // LOGIN STATE
    // ***********

    struct 
    {
        ff_Chat_t reason;
    } DisconnectLogin_cb;

    struct 
    {
        ff_String server_id;
        ff_VarInt public_key_length;
        ff_ByteArray public_key;
        ff_VarInt verify_token_length;
        //TODO ff_ByteArray verify_token;
    } EncryptionRequest_cb ff_DEPRECATED("Unimplemented");

    struct 
    {
        ff_UUID uuid;
        ff_String username;
        ff_VarInt num_properties;

        // TODO these are not valid types yet
        // struct
        // {
        //     ff_String_Array name;
        //     ff_String_Array value;
        //     ff_Boolean_Array is_signed;
        // } Propety;
    } LoginSuccess_cb ff_DEPRECATED("Unimplemented");

    struct 
    {
        ff_VarInt threshold;
    } SetCompression_cb;

    struct 
    {
        ff_VarInt message_id;
        ff_Identifier_t channel;
        // TODO ff_ByteArray data;
    } LoginPluginRequest_cb ff_DEPRECATED("Unimplemented");

    struct 
    {
        ff_String_t 
    } LoginStart_sb;

    struct 
    {

    } EncryptionResponse_sb;

    struct 
    {

    } LoginPluginResponse_sb;

    struct 
    {

    } LoginAcknowledged_sb;

    struct 
    {

    } ClientboundPluginMessageConfiguration_cb;

    struct 
    {

    } DisconnectConfiguration_cb;

    struct 
    {

    } FinishConfiguration_cb;

    struct 
    {

    } ClientboundKeepAliveConfiguration_cb;

    struct 
    {

    } PingConfiguration_cb;

    struct 
    {

    } RegistryData_cb;

    struct 
    {

    } ResourcePackConfiguration_cb;

    struct 
    {

    } FeatureFlags_cb;

    struct 
    {

    } UpdateTagsConfiguration_cb;

    struct 
    {

    } ClientInformationConfiguration_sb;

    struct 
    {

    } ServerboundPluginMessageConfiguration_sb;

    struct 
    {

    } FinishConfiguration_sb;

    struct 
    {

    } ServerboundKeepAliveConfiguration_sb;

    struct 
    {

    } PongConfiguration_sb;

    struct 
    {

    } ResourcePackResponseConfiguration_sb;

    struct 
    {

    } BundleDelimiter_cb;

    struct 
    {

    } SpawnEntity_cb;

    struct 
    {

    } SpawnExperienceOrb_cb;

    struct 
    {

    } EntityAnimation_cb;

    struct 
    {

    } AwardStatistics_cb;

    struct 
    {

    } AcknowledgeBlockChange_cb;

    struct 
    {

    } SetBlockDestroyStage_cb;

    struct 
    {

    } BlockEntityData_cb;

    struct 
    {

    } BlockAction_cb;

    struct 
    {

    } BlockUpdate_cb;

    struct 
    {

    } BossBar_cb;

    struct 
    {

    } ChangeDifficulty_cb;

    struct 
    {

    } ChunkBatchFinished_cb;

    struct 
    {

    } ChunkBatchStart_cb;

    struct 
    {

    } ChunkBiomes_cb;

    struct 
    {

    } ClearTitles_cb;

    struct 
    {

    } CommandSuggestionsResponse_cb;

    struct 
    {

    } Commands_cb;

    struct 
    {

    } CloseContainer_cb;

    struct 
    {

    } SetContainerContent_cb;

    struct 
    {

    } SetContainerProperty_cb;

    struct 
    {

    } SetContainerSlot_cb;

    struct 
    {

    } SetCooldown_cb;

    struct 
    {

    } ChatSuggestions_cb;

    struct 
    {

    } ClientboundPluginMessagePlay_cb;

    struct 
    {

    } DamageEvent_cb;

    struct 
    {

    } DeleteMessage_cb;

    struct 
    {

    } DisconnectPlay_cb;

    struct 
    {

    } DisguisedChatMessage_cb;

    struct 
    {

    } EntityEvent_cb;

    struct 
    {

    } Explosion_cb;

    struct 
    {

    } UnloadChunk_cb;

    struct 
    {

    } GameEvent_cb;

    struct 
    {

    } OpenHorseScreen_cb;

    struct 
    {

    } HurtAnimation_cb;

    struct 
    {

    } InitializeWorldBorder_cb;

    struct 
    {

    } ClientboundKeepAlivePlay_cb;

    struct 
    {

    } ChunkDataAndUpdateLight_cb;

    struct 
    {

    } WorldEvent_cb;

    struct 
    {

    } Particle_cb;

    struct 
    {

    } UpdateLight_cb;

    struct 
    {

    } LoginPlay_cb;

    struct 
    {

    } MapData_cb;

    struct 
    {

    } MerchantOffers_cb;

    struct 
    {

    } UpdateEntityPosition_cb;

    struct 
    {

    } UpdateEntityPositionAndRotation_cb;

    struct 
    {

    } UpdateEntityRotation_cb;

    struct 
    {

    } MoveVehicle_cb;

    struct 
    {

    } OpenBook_cb;

    struct 
    {

    } OpenScreen_cb;

    struct 
    {

    } OpenSignEditor_cb;

    struct 
    {

    } PingPlay_cb;

    struct 
    {

    } PingResponsePlay_cb;

    struct 
    {

    } PlaceGhostRecipe_cb;

    struct 
    {

    } PlayerAbilities_cb;

    struct 
    {

    } PlayerChatMessage_cb;

    struct 
    {

    } EndCombat_cb;

    struct 
    {

    } EnterCombat_cb;

    struct 
    {

    } CombatDeath_cb;

    struct 
    {

    } PlayerInfoRemove_cb;

    struct 
    {

    } PlayerInfoUpdate_cb;

    struct 
    {

    } LookAt_cb;

    struct 
    {

    } SynchronizePlayerPosition_cb;

    struct 
    {

    } UpdateRecipeBook_cb;

    struct 
    {

    } RemoveEntities_cb;

    struct 
    {

    } RemoveEntityEffect_cb;

    struct 
    {

    } ResourcePackPlay_cb;

    struct 
    {

    } Respawn_cb;

    struct 
    {

    } SetHeadRotation_cb;

    struct 
    {

    } UpdateSectionBlocks_cb;

    struct 
    {

    } SelectAdvancementsTab_cb;

    struct 
    {

    } ServerData_cb;

    struct 
    {

    } SetActionBarText_cb;

    struct 
    {

    } SetBorderCenter_cb;

    struct 
    {

    } SetBorderLerpSize_cb;

    struct 
    {

    } SetBorderSize_cb;

    struct 
    {

    } SetBorderWarningDelay_cb;

    struct 
    {

    } SetBorderWarningDistance_cb;

    struct 
    {

    } SetCamera_cb;

    struct 
    {

    } SetHeldItem_cb;

    struct 
    {

    } SetCenterChunk_cb;

    struct 
    {

    } SetRenderDistance_cb;

    struct 
    {

    } SetDefaultSpawnPosition_cb;

    struct 
    {

    } DisplayObjective_cb;

    struct 
    {

    } SetEntityMetadata_cb;

    struct 
    {

    } LinkEntities_cb;

    struct 
    {

    } SetEntityVelocity_cb;

    struct 
    {

    } SetEquipment_cb;

    struct 
    {

    } SetExperience_cb;

    struct 
    {

    } SetHealth_cb;

    struct 
    {

    } UpdateObjectives_cb;

    struct 
    {

    } SetPassengers_cb;

    struct 
    {

    } UpdateTeams_cb;

    struct 
    {

    } UpdateScore_cb;

    struct 
    {

    } SetSimulationDistance_cb;

    struct 
    {

    } SetSubtitleText_cb;

    struct 
    {

    } UpdateTime_cb;

    struct 
    {

    } SetTitleText_cb;

    struct 
    {

    } SetTitleAnimationTimes_cb;

    struct 
    {

    } EntitySoundEffect_cb;

    struct 
    {

    } SoundEffect_cb;

    struct 
    {

    } StartConfiguration_cb;

    struct 
    {

    } StopSound_cb;

    struct 
    {

    } SystemChatMessage_cb;

    struct 
    {

    } SetTabListHeaderAndFooter_cb;

    struct 
    {

    } TagQueryResponse_cb;

    struct 
    {

    } PickupItem_cb;

    struct 
    {

    } TeleportEntity_cb;

    struct 
    {

    } UpdateAdvancements_cb;

    struct 
    {

    } UpdateAttributes_cb;

    struct 
    {

    } EntityEffect_cb;

    struct 
    {

    } UpdateRecipes_cb;

    struct 
    {

    } UpdateTagsPlay_cb;

    struct 
    {

    } ConfirmTeleportation_sb;

    struct 
    {

    } QueryBlockEntityTag_sb;

    struct 
    {

    } ChangeDifficulty_sb;

    struct 
    {

    } AcknowledgeMessage_sb;

    struct 
    {

    } ChatCommand_sb;

    struct 
    {

    } ChatMessage_sb;

    struct 
    {

    } PlayerSession_sb;

    struct 
    {

    } ChunkBatchReceived_sb;

    struct 
    {

    } ClientStatus_sb;

    struct 
    {

    } ClientInformationPlay_sb;

    struct 
    {

    } CommandSuggestionsRequest_sb;

    struct 
    {

    } AcknowledgeConfiguration_sb;

    struct 
    {

    } ClickContainerButton_sb;

    struct 
    {

    } ClickContainer_sb;

    struct 
    {

    } CloseContainer_sb;

    struct 
    {

    } ServerboundPluginMessagePlay_sb;

    struct 
    {

    } EditBook_sb;

    struct 
    {

    } QueryEntityTag_sb;

    struct 
    {

    } Interact_sb;

    struct 
    {

    } JigsawGenerate_sb;

    struct 
    {

    } ServerboundKeepAlivePlay_sb;

    struct 
    {

    } LockDifficulty_sb;

    struct 
    {

    } SetPlayerPosition_sb;

    struct 
    {

    } SetPlayerPositionAndRotation_sb;

    struct 
    {

    } SetPlayerRotation_sb;

    struct 
    {

    } SetPlayerOnGround_sb;

    struct 
    {

    } MoveVehicle_sb;

    struct 
    {

    } PaddleBoat_sb;

    struct 
    {

    } PickItem_sb;

    struct 
    {

    } PingRequestPlay_sb;

    struct 
    {

    } PlaceRecipe_sb;

    struct 
    {

    } PlayerAbilities_sb;

    struct 
    {

    } PlayerAction_sb;

    struct 
    {

    } PlayerCommand_sb;

    struct 
    {

    } PlayerInput_sb;

    struct 
    {

    } PongPlay_sb;

    struct 
    {

    } ChangeRecipeBookSettings_sb;

    struct 
    {

    } SetSeenRecipe_sb;

    struct 
    {

    } RenameItem_sb;

    struct 
    {

    } ResourcePackResponsePlay_sb;

    struct 
    {

    } SeenAdvancements_sb;

    struct 
    {

    } SelectTrade_sb;

    struct 
    {

    } SetBeaconEffect_sb;

    struct 
    {

    } SetHeldItem_sb;

    struct 
    {

    } ProgramCommandBlock_sb;

    struct 
    {

    } ProgramCommandBlockMinecart_sb;

    struct 
    {

    } SetCreativeModeSlot_sb;

    struct 
    {

    } ProgramJigsawBlock_sb;

    struct 
    {

    } ProgramStructureBlock_sb;

    struct 
    {

    } UpdateSign_sb;

    struct 
    {

    } SwingArm_sb;

    struct 
    {

    } TeleportToEntity_sb;

    struct 
    {

    } UseItemOn_sb;

    struct 
    {

    } UseItem_sb;

} Packet;

#endif